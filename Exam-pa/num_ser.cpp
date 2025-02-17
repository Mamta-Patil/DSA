// 0 3  8 15 24 35 48 63 80 99
#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter the number of terms: ";
    cin >> n;

    int term = 0; 
    int difference = 3; 

    for (int i = 1; i <= n; ++i) {
        cout << term << " ";
        term += difference;
        difference += 2; 
    }

    return 0;
}
