#include <iostream>

using namespace std;

int main() {
   //for loop
    /*
     int rows= 4;
    char currentChar = 'a';


    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  ";
        }

        for (int k = 1; k <= i; ++k) {
            cout << currentChar << " ";
        }

        cout << endl;

        currentChar++;

        if (currentChar > 'z') {
            currentChar = 'a';
        }
    }
*/
// nested while
/*
int rows = 4;
    char currentChar = 'a';

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= rows - i) {
            cout << "  ";
            j++;
        }

        int k = 1;
        while (k <= i) {
            cout << currentChar << " ";
            k++;
        }

        cout << endl;

        currentChar++;

        if (currentChar > 'z') {
            currentChar = 'a';
        }

        i++;
    }

*/
//while
   int rows = 4;
    char currentChar = 'a';

    int i = 1;
    do {
        int j = 1;
        do {
            cout << "  ";
            j++;
        } while (j <= rows - i);

        int k = 1;
        do {
            cout << currentChar << " ";
            k++;
        } while (k <= i);

        cout << endl;

        currentChar++;

        if (currentChar > 'z') {
            currentChar = 'a';
        }

        i++;
    } while (i <= rows);




    return 0;
}
