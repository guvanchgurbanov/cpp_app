#include <iostream>

using namespace std;
int main() {
    int hepdaninGuni;
    cout << " 1-7 aralygyndaky hepdanin gununi giriz: ";
    cin >> hepdaninGuni ;
    if (hepdaninGuni < 1 || hepdaninGuni > 7 ) {
        cout << "Shul Gun Yok" << endl;
        return 0 ;
    }

    int gun;
    cout << " 1-365 aralygyndaky gunun nomer giriz:";
    cin >> gun;


    if (gun < 1 || gun > 365) {
        cout << "Nadogry girish" << endl;
        return 0;
    }

    int weekdays =  ((hepdaninGuni -1  + gun) % 7);

    if (weekdays == 1 ) {
        cout<< " Dushenbe " ;
    }
    else if (weekdays == 4) {
        cout<< " Penshenbe " ;
    } else if (weekdays == 5) {
        cout<< " Anna " ;
    } else if (weekdays == 6) {
        cout<< " Shenbe " ;
    } else if ( weekdays == 0 ) {
        cout<<  "Yeksenbe";
    } else if (weekdays == 2) {
        cout<< " Sishenbe " ;
    } else if (weekdays == 3) {
        cout<< " Charshenbe " ;
    }

    return 0;
}