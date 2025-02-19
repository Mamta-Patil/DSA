#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter sixe of n:";
cin >> n;
int arr1[n];
int arr2[n];

for(int i=0;i<n;i++)
{
	cout << "Enter value of [" << i << "]";
	cin >> arr1[i];
}	

for(int i=0;i<n;i++)
{
	arr2[i] = arr1[i];
}	
cout << "Copy Element: ";
for(int i=0;i<n;i++)
{
	cout << arr2[i]<< " ";
}
cout<< endl;



}
