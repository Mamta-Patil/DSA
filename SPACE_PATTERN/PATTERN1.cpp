//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5   
//#include<iostream>
//using namespace std;
//int main()
//{
//	for(int k=1;k<=5;k++)
//	{
//		cout << " ";
//	}
//	for(int i=1;i<=5;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//}

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}

