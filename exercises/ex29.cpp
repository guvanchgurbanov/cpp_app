//
// Created by Guga on 14-Sep-25.
//#include <iostream>

using namespace std;
int main() {
    int a,b ;
    cin >> a >> b;
    // "Gonuburclugyn her tarapyna nace kwadrat yerlesyandigini tapmak";
    int c;
    cin >> c ;

    // Jemi kwadratlaryň sany
    int jemiKwadrat = a * b;
    int goniburcluk = c * c;
    int x = (a/c ) * (b/c);


    cout << x << jemiKwadrat << endl ;
    cout << "Galan meydan" << goniburcluk << endl;

    int y = jemiKwadrat - (x * jemiKwadrat);
    cout << "Remaining area: " << y << endl;

    return 0;
}