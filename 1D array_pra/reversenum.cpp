#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int sum=0;
	int arr1[n];
	for(int i=1;i<=n;i++)
	{
		cout << "value of [" << i << "]";
		cin >> arr1[i] ;
	}
	cout << "Reverse Number : ";
	for(int i=n;i>0;i--)
	{
	    cout << arr1[i] << " ";	
	}
}
