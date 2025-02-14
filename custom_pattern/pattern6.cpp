//     * * * * *
//     *       *
//     * * * * *
//     *       *
//     *       *
//     *       *
//     *       *

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j==1 || i==1 || i==3 ||j==5 )
			{
				cout <<  "*";
			}
//			else if(i==2 && j==5)
//			{
//				cout << " *";
//			}
			else if(i==3 && j==5)
			{
				cout << " *";
			}	
//			else if(i==5 && j==5)
//			{
//				cout << " *";
//			}
//				else if(i==6 && j==5)
//			{
//				cout << " *";
//			}
			else
			{
				cout << " ";
			}
			
		}
		cout << endl;
	}
}

