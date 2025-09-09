//
// Created by Guga on 09-Sep-25.
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

    if (weekdays == 3) {
        cout<< " Dushenbe " ;
    }
    else if (weekdays == 6) {
        cout<< " Penshenbe " ;
    } else if (weekdays == 0) {
        cout<< " Anna " ;
    } else if (weekdays == 1) {
        cout<< " Shenbe " ;
    } else if ( weekdays == 2 ) {
        cout<<  "Yeksenbe";
    } else if (weekdays == 4) {
        cout<< " Sishenbe " ;
    } else if (weekdays == 5) {
        cout<< " Charshenbe " ;
    }

    return 0;
}