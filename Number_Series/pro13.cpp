//14, 28, 20, 40, 32, 64, 56

#include <iostream>
using namespace std;

int main() {
    int num = 14;  
    int terms = 7;

    for (int i = 0; i < terms; i++) {
        cout << num << " ";
        
        if (i % 2 == 0) 
            num *= 2;
        else 
            num -= 8;
    }

    return 0;
}

