#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout << "Enter size of array (m,n): ";
	cin >> m >> n;
	float sum=0;
	float avg;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
				cout << "value of [" << i << "]" << "[" << j << "]";
		        cin >> arr[i][j];
		        sum=sum+arr[i][j];
		}
	}
	avg=sum/(m*n);
cout << "avg is: " << avg;
}

