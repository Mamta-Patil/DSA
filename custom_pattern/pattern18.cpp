//   *     *
//   * * * *
//   *  *  *
//   *     *
//   *     *
//   *     * 
//   *     *

#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j==1 || j==5 )
			{
				cout <<  "*";
			}	
			else if(i==2 && j==2 || i==2 && j==3 ||i==3 && j==3)
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

