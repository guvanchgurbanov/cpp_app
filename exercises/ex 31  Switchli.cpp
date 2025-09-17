//
// Created by Guga on 17-Sep-25.
// #include <iostream>

using namespace std;
int main() {
    int k;
    cout << "1-5 aralykda san girzir:";
    cin >> k;

    switch (k) {
        case 1:
            cout << "1-Yaramaz" << endl;
            break;

        case 2:
            cout << "2-Kanagatlanarsyz"<< endl;
            break;


        case 3:
            cout <<"3-Kanagatlanarly"<< endl;
            break;


        case 4:
            cout <<"4-Yagshy"<<endl;
            break;

        case 5:
            cout <<"5-Oran Yagshy"<< endl;
            break;

        default:
            cout << "Yalnysh !! ";
    }

    return 0 ;
}