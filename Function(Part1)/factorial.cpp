// wap to find factorial using udf.
#include<iostream>
using namespace std;
int factorial(int number)
{
		int factorial;
	for(int i=number;i>=1;i--)
	{
		factorial=number * i;
	}
	cout << endl;
	cout << "Factorial of " << number << " is " << factorial;
}
int main()
{
	int number;
	cout << "Enter number for find factorial: ";
	cin >> number;
	factorial(number);
}
