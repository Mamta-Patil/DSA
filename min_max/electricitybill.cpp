#include<iostream>
using namespace std;
int main()
{
	int unit; int final_amount;
	cout << "Enter value of Unit:"<< endl;
	cin >> unit;
	if(unit<=50)
	{
	  final_amount= (unit*0.5);
	  cout << "Your Electricity bill is : " << final_amount ;
	}
	if(unit<=150)
	{
	  final_amount= (unit*1);
	  cout << "Your Electricity bill is : " << final_amount ;
	}
	if(unit<=350)
	{
	  final_amount= (unit*1.5);
	  cout << "Your Electricity bill is : " << final_amount ;
	}
	if(unit>350)
	{
	  final_amount= (unit*2);
	  cout << "Your Electricity bill is : " << final_amount ;
	}
}
