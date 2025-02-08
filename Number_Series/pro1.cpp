// 2, 1, (1/2), (1/4), (1/6)
#include<iostream>
using namespace std;
int main()
{
	int first=1;
	int second=2;
	cout << second << " " << first << " ";
	for(int i=1;i<=10;i++)
	{
		second=second*2;
		cout << "1/" << (second*10) << " " ;
		i++;
	}
}

