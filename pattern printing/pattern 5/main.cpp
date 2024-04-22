#include <iostream>

using namespace std;

int main()
{
    //for loop
    /*
 cout << "0" << endl;

    for (int n = 9; n >= 1; n--) {
        for (int i = 9; i >= n; i--) {
            cout << i;
        }

        cout << "0";

        for (int i = n; i <= 9; i++) {
            cout << i;
        }

        cout << endl;
    }*/
//nested while
/*
    int n = 9;

    cout << "0" << endl;

    while (n >= 1) {
        int i = 9;

        while (i >= n) {
            cout << i;
            i--;
        }

        cout << "0";

        i = n;

        while (i <= 9) {
            cout << i;
            i++;
        }

        cout << endl;

        n--;
    }
  */
  //do while



      int n = 9;

    cout << "0" << endl;

    do {
        int i = 9;

        do {
            cout << i;
            i--;
        } while (i >= n);

        cout << "0";

        i = n;

        do {
            cout << i;
            i++;
        } while (i <= 9);

        cout << endl;

        n--;
    } while (n >= 1);



    return 0;
}
