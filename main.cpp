#include <iostream>

using namespace std;

int main() {
    int x {};
    cin >> x;

    int birinjiSifr = x / 1000;
    int ikinjiSifr = ( x / 100) %10;
    int ucunjiSifir = (x / 10)%10;
    int sonkySifr = x % 10;

    int sifrlerinJemi = birinjiSifr + ikinjiSifr + ucunjiSifir + sonkySifr;
    cout << sifrlerinJemi;

    return 0;

}