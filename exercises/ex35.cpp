 #include <iostream>

using namespace std;
int main() {
    int b;
    cout << "1 destimetr , 2-Km , 3-M , 4- Mm ,5-cm  Aralykda sangirzir:";
    cin >> b;

    if ( b < 1 || 5 < b) {
        cout << "Nadogry girish";
        return 1;
    }

    double a;
    cout << " sangiriz: " ;
    cin >>a;

    double Jogaby;



    switch (b) {
        case 1:
            Jogaby = a / 10 ;
            cout << a << " Destimetr ";
            break;

        case 2:
            Jogaby = a * 1000;
            cout << a << " Km ";
            break;

        case 3:
            Jogaby = a * 1;
            cout << a << " M ";
            break;

        case 4:
            Jogaby = a / 1000;
            cout << a << " Mm ";
            break;

        case 5:
            Jogaby = a / 100;
            cout << a << " Cm ";
            break;
    }

    cout << " Jogaby: " << Jogaby  << " meter" ;

    return 0 ;
}