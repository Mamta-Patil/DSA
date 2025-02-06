//31, 29, 24, 22, 17, 15
#include<iostream>
using namespace std;
int main()
{
	int first=31;
	int second=29;
	for(int i=1;i<=10;i++)
	{
		cout << first << " " << second << " ";
		first-=7;
		second-=7;
		i++;
	}
}
