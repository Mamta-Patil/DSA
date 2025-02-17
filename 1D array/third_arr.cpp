#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int sum=0;
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cout << "Enter value of arr1 [" << i << "]";
		cin >> arr1[i] ;
	}
	for(int i=0;i<n;i++)
	{
	    cout << arr1[i] ;	
	}
	
    cout << endl;
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		cout << "Enter value of arr2 [" << i << "]";
		cin >> arr2[i] ;
	}
	for(int i=0;i<n;i++)
	{
	    cout << arr2[i] ;	
	}
	cout <<endl;
	cout << "Third created arr3 : "<< endl;
	int arr3[n];
	for(int i=0;i<n;i++) 
	{
	    arr3[i]=arr1[i]+arr2[i];
	    cout << "arr3["<<i<<"]" << arr3[i];
	    cout << endl;
	}
}
