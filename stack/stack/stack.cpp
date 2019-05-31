#include <iostream>
#include <cstdlib>
#include <stack>
#include <algorithm>
#include <list>

using namespace std;

void main()
{

	stack<int> mystack;
	stack<int, list<int>> myliststack;

	mystack.push(1);
	mystack.push(2);
	mystack.push(3);
	mystack.push(4);
	mystack.push(5);

	while (!mystack.empty())
	{
		cout << mystack.top() << endl;
		mystack.pop();
	}



	system("pause");
}