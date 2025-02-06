//3, 4, 7, 8, 11, 12, 15
#include<iostream>
using namespace std;
int main()
{
	int first=3;
	int second=4;
	for(int i=1;i<=10;i++)
	{
		cout << first << " " << second << " ";
		first +=4;
		second+=4;
		i++;
	}
}
