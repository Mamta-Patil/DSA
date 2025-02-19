#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cout << "value of [" << i << "]";
		cin >> arr[i] ;
	}
	for(int i=1;i<=n;i++)
	{
	   for(int j=1;j<=10;j++)
	   {
	   	cout << arr[i]<< "*" << j << "=" << arr[i]*j << endl;
		}
		   	cout << endl;
	
	}
}
