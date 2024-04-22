#include <iostream>

using namespace std;

int main()
{
    //for loop
    /*
     int rows = 4;
    char currentChar = 'a';

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            cout << currentChar << " ";
        }

        cout << endl;

        currentChar++;

        if (currentChar > 'z') {
            currentChar = 'a';
        }
    }*/
//nested while
/*
       int rows = 4;
    char currentChar = 'a';

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= rows) {
            cout << currentChar << " ";
            j++;
        }

        cout << endl;

        currentChar++;

        if (currentChar > 'z') {
            currentChar = 'a';
        }

        i++;
    }
    */

    //do while

       int rows = 4;
    char currentChar = 'a';

    int i = 1;
    do {
        int j = 1;
        do {
            cout << currentChar << " ";
            j++;
        } while (j <= rows);

        cout << endl;

        currentChar++;

        if (currentChar > 'z') {
            currentChar = 'a';
        }

        i++;
    } while (i <= rows);


    return 0;
}
