#include <iostream>
#include <cstdlib>
#include <forward_list>
#include <algorithm>

using namespace std;

void main3()
{
	 forward_list<int> myarray{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (auto it = myarray.begin(); it != myarray.end(); it++)//end只起结束作用，不能取出值
	{
		cout << *it << "    " << typeid(it).name() << endl;
	}

	for_each(myarray.begin(), myarray.end(), [](int &x) {x += 1; });

	for_each(myarray.begin(), myarray.end(), [](int x) {cout << x << endl; });






	system("pause");
}