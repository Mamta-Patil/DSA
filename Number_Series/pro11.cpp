//1.5, 2.3, 3.1, 3.9,4.7
#include <iostream>
using namespace std;

int main() {
    float first = 1.5;   
    float second = 0.8;    

    for (int i = 0; i <=5; i++) {
        cout << first << " ";
        first += second;  // Increment by common difference
    }

    return 0;
}

