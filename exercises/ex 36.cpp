//
// Created by Guga on 21-Sep-25.
// #include <iostream>

using namespace std;
int main() {
    int g;
    cout << "1-Kilogram , 2-Milligram , 3-Gram , 4-Tonna ,5-Sentner  Haysyny isleseniz saylan:";
    cin >> g;

    if ( g < 1 || 5 < g ) {
        cout << "Nadogry girish";
        return 1;
    }

    double c;
    cout << " sangiriz: " ;
    cin >>c;

    double Jogaby;


    switch (g) {
        case 1:
            Jogaby = c / 1 ;
            cout << c << " Killogram ";
            break;

        case 2:
            Jogaby = c / 1000 ;
            cout << c << " Milligram ";
            break;

        case 3:
            Jogaby = c * 0.001;
            cout << c << " Gram ";
            break;

        case 4:
            Jogaby = c * 1000;
            cout << c << " Tonna ";
            break;

        case 5:
            Jogaby = c * 100;
            cout << c << " Sentner ";
            break;
    }

    cout << " Jogaby: " << Jogaby  << " Killogram" ;

    return 0 ;
}