#include<iostream>
using namespace std;
int main()
{
	int r,c;
	int sum=0;
	cout << "Enter size of array (m,n): ";
	cin >> r >> c;
	int arr[r][c];
	int start=2;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++){
				cout << "value of [" << i << "]" << "[" << j << "]";
		        cin >> arr[i][j];
		}
	}
	for(int i=0;i<c;i++)
	{
			for(int j=0;j<c;j++){
		        cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=0;i<r;i++){
//			for(int j=0;j<c;j++){
//				if(i==j)
//				{
//				sum=sum+arr[i][j]; 	
//				} 
//		}

sum=sum+arr[i][start];
start--;
		cout << endl;
	}
	 cout << sum;  
}

