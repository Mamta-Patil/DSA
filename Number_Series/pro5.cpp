//53, 53, 40, 40, 27, 27, 14, 14
#include<iostream>
using namespace std;
int main()
{
	int first=53;
	int second=53;
	for(int i=1;i<=10;i++)
	{
		cout << first << " " << second << " ";
		first-=13;
		second-=13;
		i++;
	}
}
