#include <iostream>
using namespace std;

int main() {
    int n = 6; // Height of 'W' pattern

    for (int i = 0; i < n; i++) {
        // First column of '*'
        cout << "*";
        
        // Spaces between first and second column
        for (int j = 0; j < n - 1; j++) {
            if ((i == n - 1 && j == n - 2) || (i == n - 2 && j == n - 3))
                cout << "*"; // Middle part of 'W'
            else
                cout << " ";
        }

        // Second column of '*'
        cout << "*";

        cout << endl;
    }

    return 0;
}

