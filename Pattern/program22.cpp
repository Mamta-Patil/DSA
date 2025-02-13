//A
//B C
//C D
//A B C D E
#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    
    return 0;
}

