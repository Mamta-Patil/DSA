//80, 10, 70, 15, 60, 20
#include<iostream>
using namespace std;
int main()
{
	int first=80;
	int second=10;
	for(int i=1;i<=10;i++)
	{
		cout << first << " " << second << " " ;

     first -=10;
     second+=5;
     i++;
	}
}

