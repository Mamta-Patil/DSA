// 58, 52, 46, 40, 34, 28
#include<iostream>
using namespace std;
int main()
{
	int first=58;
	for(int i=1;i<=15;i++)
	{
		cout << first << " ";
		first-=6;
		i++;
	}
}

