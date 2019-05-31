#include <iostream>
#include <cstdlib>
#include <array>//Õ»Çø
#include <algorithm>

using namespace std;

void main1()
{
	array<int, 10> myarray{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (auto it=myarray.begin();it!=myarray.end();it++)
	{
		cout << *it << "    " << typeid(it).name() << endl;
	}

	for_each(myarray.begin(), myarray.end(), [](int &x) {x += 1; });

	for_each(myarray.begin(), myarray.end(), [](int x) {cout<<x<<endl; });


	system("pause");
}