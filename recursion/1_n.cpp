#include <iostream>

using namespace std;

void num(int n, int i = 1) 
{
    if (i > n) 
	{
		return; 
	} 
	
	cout << i <<  " " ; 
    num(n, i + 1);  
}

int main() 
{
    num(10);  
}
