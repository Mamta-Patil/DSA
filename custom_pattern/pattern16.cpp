	
	  //      *     * 
      //      *    *
      //      *   *
      //      * *
      //      *   *
      //      *    *
      //      *     *


#include <iostream>
using namespace std;

int main() {

    //      *     * 
    //      *    *
    //      *   *
    //      * *
    //      *   *
    //      *    *
    //      *     *

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || j == 6 - i || (j == i - 2 && i > 4)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
