#include<iostream>
using namespace std;
int main()
{
	int num;
	int n;
	
	cout << "Enter value of num & n : ";
	cin >> num >> n;
	
	if(num % n==0)
	{
		cout << num << " is divisble by " << n ;
	}
	else
	{
		cout << num << " is not divisble by " << n ;
	}
	
}
