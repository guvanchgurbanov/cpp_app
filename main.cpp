#include <iostream>

using namespace std;

int main() {
    int a {};
    cin >> a;

    int birinjiSifr = a / 1000;
    int ikinjiSifr = ( a / 100) % 1000;
    int ucunjiSifir = (a /10) %100;
    int sonkySifr = a % 10;

    int sifrlerinJemi = birinjiSifr + ikinjiSifr + ucunjiSifir+ sonkySifr;
    cout << sifrlerinJemi;

    return 0;

}