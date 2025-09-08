#include <iostream>

using namespace std;
int main() {
    int gun;
    cin >> gun;

    if (gun < 1 || gun > 365) {
        cout << "Nadogry girish" << endl;
        return 0;
    }

    int weekdays =  gun % 7;

    if ( weekdays == 0 ) {
        cout<<  "Yeksenbe";
    }
    else if (weekdays == 1) {
        cout<<  " Dushenbe "  ;
    } else if (weekdays == 2) {
         cout<< " Sishenbe "  ;
    } else if (weekdays == 3) {
         cout<< " Charshenbe " ;
    } else if (weekdays == 4) {
        cout<< " Penshenbe " ;
    } else if (weekdays == 5) {
         cout<< " Anna " ;
    } else if (weekdays == 6) {
         cout<< " Shenbe " ;
    }

    return 0;
}