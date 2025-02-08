//5.2, 4.8, 4.4, 4, 3.6
#include<iostream>
using namespace std;
int main()
{
	float num = 5.2;
	for(int i=1;i<=10;i++)
	{
		cout << num << " ";
		num -=0.4;
		i++;
	}
}
