//  * * * * *
//      *
//      *
//      *
//      *
//   *  *
//    * * 

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=7;j++)
		{
			if(j==4 ||i==1)
			{
				cout <<  "*";
			}
			else if(i==6 && j==1)
			{
				cout <<  "*";
			}	
			else if(i==7 && j==2)
			{
				cout <<  "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

