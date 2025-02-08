//201, 202, 204, 207, 211
#include<iostream>
using namespace std;
int main()
{
	int first=201;
	int second=1;
	for (int i=1;i<=10;i++)
	{
		cout << first << " ";
//		num++;
//		num+=1;
        first+=second;
        second++;
		i++;
	}
}

