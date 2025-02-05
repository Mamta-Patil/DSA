#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                cout << "Num1 is the maximum: " << num1 << endl;
            } else {
                cout << "Num4 is the maximum: " << num4 << endl;
            }
        } else {
            if (num3 > num4) {
                cout << "Num3 is the maximum: " << num3 << endl;
            } else {
                cout << "Num4 is the maximum: " << num4 << endl;
            }
        }
    } else {  
        if (num2 > num3) {
            if (num2 > num4) {
                cout << "Num2 is the maximum: " << num2 << endl;
            } else {
                cout << "Num4 is the maximum: " << num4 << endl;
            }
        } else {
            if (num3 > num4) {
                cout << "Num3 is the maximum: " << num3 << endl;
            } else {
                cout << "Num4 is the maximum: " << num4 << endl;
            }
        }
    }

    return 0;
}

