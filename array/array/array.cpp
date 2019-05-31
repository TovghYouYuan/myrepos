#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

void main1()
{
	int a[5];
	int b[2][5];//无法用auto循环






	system("pause");
}


void main12()
{
	array<int, 500>myint{ 1,2,3,4,5 };

	for (auto i:myint)
	{
		cout << i<<"            "<<(void*)&i<<endl;
	}


	cout << "********************" << endl;
	cout << "********************" << endl;
	cout << "********************" << endl;


	for (int i=0;i<5;i++)
	{
		cout << myint[i] <<"              "<<(void*)&myint[i] << endl;
	}


	cin.get();
}



void main()
{


	array<int, 10>myint1 = { 121,22,33,44,22,15,23,45,29,33 };
	array<int, 10>myint2 = { 55,22,33,44,22,15,23,45,29,33 };
	array<int, 10>myint3 = { 88,22,33,44,22,15,23,45,29,33 };

	array<array<int, 10>, 3>myint4 = { myint1,myint2,myint3 };

	for (auto i:myint4)
	{
		for (auto j:i)
		{
			cout << j <<"  ";
		}
		cout << endl;
	}







	cin.get();
}