//
// Created by Guga on 18-Sep-25.
// #include <iostream>

using namespace std;
int main() {
    int ay ;
    cout << "1-12 aralykda san girzir:";
    cin >> ay ;

    int guninsany ;

    switch (ay) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            guninsany = 31 ;
            break;

        case 4: case 6: case 9: case 11:
            guninsany = 30;
            break;

        case 2:
            guninsany = 28;
            break;

        default:
            cout << "Yalnysh !! ";

    }

    cout << guninsany << " Gun bar "<< endl;

    return 0 ;
}