//  * *
//  *   *
//  *    *
//  *    *
//  *    *
//  *   *
//  * *

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j==1)
			{
				cout << " *";
			}
			else if(i==1 && j==2)
			{
				cout << " *";
			}
			else if(i==2 && j==3)
			{
				cout << " *";
			}
			else if(i==3 && j==4)
			{
				cout << " *";
			}
			else if(i==4 && j==4)
			{
				cout << " *";
			}
		    else if(i==5 && j==4)
			{
				cout << " *";
			}
			else if(i==6 && j==3)
			{
				cout << " *";
			}
			else if(i==7 && j==2)
			{
				cout << " *";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

