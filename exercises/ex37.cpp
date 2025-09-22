//
// Created by Guga on 22-Sep-25.
// #include <iostream>

using namespace std;
int main() {

    int yyl, ay, gun;
    cout << "Sene giriz (Yyl, Ay, Gun): ";
    cin >> yyl >> ay >> gun;

    if (gun == 1) {
        switch (ay) {
            case 1:
                cout << yyl - 1 << "." << 12 << "." << 31;
                break;
            case 2:
                cout << yyl << "." << 1 << "." << 31;
                break;
            case 3:
                cout << yyl << "." << 2 << "." << 28;
                break;
            case 4:
                cout << yyl << "." << 3 << "." << 31;
                break;
            case 5:
                cout << yyl << "." << 4 << "." << 30;
                break;
            case 6:
                cout << yyl << "." << 5 << "." << 31;
                break;
            case 7:
                cout << yyl << "." << 6 << "." << 30;
                break;
            case 8:
                cout << yyl << "." << 7 << "." << 31;
                break;
            case 9:
                cout << yyl << "." << 8 << "." << 31;
                break;
            case 10:
                cout << yyl << "." << 9 << "." << 30;
                break;
            case 11:
                cout << yyl << "." << 10 << "." << 31;
                break;
            case 12:
                cout << yyl << "." << 11 << "." << 30;

        }

    } else {
        cout << yyl << "." << ay << "." << gun - 1 << endl;
    }

    return 0 ;
}