//4>	WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.
#include<iostream>
using namespace std;
int main()
{
	int math;
	int sci;
	int eng;
	int sum;
	int percentage;

	cout << "Enter maeks of Math's : ";
	cin >> math;
	cout << "Enter maeks of Science : ";
	cin >> sci;
	cout << "Enter maeks of English : ";
	cin >> eng;
	cout <<  "Total Marks : ";
	sum=math+sci+eng;
	cout << sum; 
	cout << "\n";
	percentage=(sum/300.0)*100;
	cout << "Percentage is : ";
	cout << percentage;
}

