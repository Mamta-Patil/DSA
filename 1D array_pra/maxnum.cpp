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
	int max=arr[0];
	for(int i=1;i<=n;i++)
	{
		if(arr[i] > max )
		{
			max=arr[i];
		}
	}
	cout << "maxiumum value is : " << max << endl;
}
