#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter ize of array: ";
	cin >> n;
	
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cout << "value of [" << i << "]";
		cin >> arr[i] ;
	}
		cout << "even number is : ";
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		
			cout << arr[i]<<" ";
		}	
	}
}
