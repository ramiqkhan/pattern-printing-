#include <iostream>

using namespace std;

int main()
{
    //for loop
    /*  int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j;
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k % 2 == 0) {
                cout << '*';
            } else {
                cout << i;
            }
        }

        for (int j = n - i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }*/
    //nested while
    /*
       int rows = 4;

    int i = 1;
    while (i <= rows) {
        int j = 1;
        while (j <= rows - i) {
            cout << j;
            j++;
        }

        int k = 1;
        while (k <= 2 * i - 1) {
            if (k <= i) {
                cout << "*";
            } else {
                cout << k - i + 1;
            }
            k++;
        }

        cout << endl;

        i++;
    }*/

// do while
 int rows = 4;

    int i = 1;
    do {
        int j = 1;
        do {
            cout << j;
            j++;
        } while (j <= rows - i);

        int k = 1;
        do {
            if (k <= i) {
                cout << "*";
            } else {
                cout << k - i + 1;
            }
            k++;
        } while (k <= 2 * i - 1);

        cout << endl;

        i++;
    } while (i <= rows);
    return 0;
}
