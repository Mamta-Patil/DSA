//A
//A B
//A B C
//A B C D
//A B C D E
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 0; j < i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    return 0;
}

