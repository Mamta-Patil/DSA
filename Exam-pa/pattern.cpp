//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int i=1;i<=10;i++)
//	{
//		for(int k=10;k>=i;k--)
//		{
//			cout << " ";
//		}
//		for(int j=1;j<=10;j++)
//		{
//			if(j==1)
//			{
//				cout << "*";
//			}
//		}
//		for(int k=1;k<=i;k++)
//		{
//			cout << " ";
//		}
//		for(int j=10;j>=1;j--)
//		{
//			if(j==9)
//			{
//				cout << "*";
//			}
//			
//		}
//			cout << endl;
//	}
//
//}

#include <iostream>
using namespace std;

int main() {
    int n;
    char symbol;
    
    // Taking input from user
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter symbol: ";
    cin >> symbol;
    
    // Upper half of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << symbol;
            else
                cout << " ";
        }
        cout << endl;
    }
    
    // Lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << symbol;
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

