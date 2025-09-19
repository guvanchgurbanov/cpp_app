 #include <iostream>

using namespace std;
int main() {
    int b;
    cout << "1 destimetr , 2-Km, 3-M , 4- Mm ,5-cm  Aralykda sangirzir:";
    cin >> b;

    double a;
    cout << "sangiriz" ;
    cin >>a;

    double Jogaby;


    if ( a < 1 || 5 < a) {
        cout << "Nadogry girish";
        return 1;
    }
    int a ;
    cout << " Sangirzir ";
    cin >> a;


    int Jogaby;

    switch (b) {
        case 1:
            Jogaby = b * 0.1 ;
            break;

        case 2:
            Jogaby = b * 1000;
            break;

        case 3:
            Jogaby = b * 3;
            break;

        case 4:
            Jogaby = b * 4;
            break;

        case 5:
            Jogaby= b * 5;
            break;
    }

    cout << "Jogaby" << Jogaby ;

    return 0 ;
}