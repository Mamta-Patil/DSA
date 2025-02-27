// wap to print table of passing number using udf.
#include<iostream>
using namespace std;
int table(int number)
{


	for(int i=1;i<=10;i++)
	{
	   	cout << number << "*" << i << "=" << number * i << endl;
	}
}
int main()
{
		int number;
	cout << "Enter size of array: ";
	cin >> number;
 table(number);
	return 0;
}

