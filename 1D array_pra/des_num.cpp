#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of the array : ";
	cin >> n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout << "enter the value of [" << i << "] :";
		cin >> arr[i];
	}

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(arr[i] > arr[j])
		{
			int x=arr[i];
			arr[i] = arr[j];
			arr[j]=x;
		}
	}
}

cout << "Desending order : ";
for(int i=0;i<n;i++)
{
	cout << arr[i] << " ";
 } 
}

