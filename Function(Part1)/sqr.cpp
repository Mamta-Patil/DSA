// wap to create function to find square of passing number.
#include<iostream>
using namespace std;

int square(int number)
{
	return number * number;
}

int main()
{
	int num;
	cout << "Enter number for find sequare: ";
	cin >> num;
	
	int result=square(num);
	cout << "The sequare of " << num << " is " << result << "." << endl; 
	return 0;
}
