//
// Created by Guga on 08-Sep-25.
//#include <iostream>

using namespace std;
int main() {
    int gun;
    cin >> gun;

    if (gun < 1 || gun > 365) {
        cout << "Nadogry girish" << endl;
        return 0;
    }

    int weekdays =  gun % 7;

    if (weekdays == 5) {
        cout<< " Dushenbe " ;
    }
    else if (weekdays == 1) {
        cout<< " Penshenbe " ;
    } else if (weekdays == 2) {
        cout<< " Anna " ;
    } else if (weekdays == 3) {
        cout<< " Shenbe " ;
    } else if ( weekdays == 4 ) {
        cout<<  "Yeksenbe";
    } else if (weekdays == 6) {
        cout<< " Sishenbe "  ;
    } else if (weekdays == 0) {
        cout<< " Charshenbe " ;
    }

    return 0;
}