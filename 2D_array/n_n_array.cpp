#include<iostream>
using namespace std;
int main()
{
	
	int m,n;
	cout << "Enter size of array (m,n): ";
	cin >> m >> n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++){
				cout << "value of [" << i << "]" << "[" << j << "]";
		        cin >> arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
			for(int j=0;j<n;j++){
		        cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
}

