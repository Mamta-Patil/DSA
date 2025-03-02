// wap to find cube using udf.
#include<iostream>
using namespace std;
int cube(int number)
{
	return number * number * number;
}

int main()
{
	int num;
	cout << "Enter number for find cube of Number: ";
	cin >> num;
	
	int result=cube(num);
	cout << "The cube of " << num << " is " << result << "." << endl; 
	return 0;
}
