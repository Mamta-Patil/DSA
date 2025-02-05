#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter value of Num1, Num2, Num3: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        if (num1 > num3) {
            cout << "Num1 is the maximum: " << num1 << endl;
        } else {
            cout << "Num3 is the maximum: " << num3 << endl;
        }
    } 
	else {  
        if (num2 > num3) {
            cout << "Num2 is the maximum: " << num2 << endl;
        } else {
            cout << "Num3 is the maximum: " << num3 << endl;
        }
    }

    return 0;
}

