//36, 34, 30, 28, 24, 22
#include<iostream>
using namespace std;
int main()
{
	int first=36;
	int second = 34;
	
	for(int i=1;i<=10;i++)
	{
		cout << first << " " << second << " "; 
		first-=6;
		second-=6;
		i++;
	}
	
}
