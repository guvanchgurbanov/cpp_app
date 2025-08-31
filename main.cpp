#include <iostream>

using namespace std;

int main() {
    int x {};
    cin >> x;

    int birinjiSifr = x / 10000;
    int ikinjiSifr = ( x / 1000) % 10;
    int ucunjiSifir = (x / 100)%10;
    int dordinjiSifir = (x / 10)%10;
    int sonkySifr = x % 10;

    int sifrlerinJemi = birinjiSifr + ikinjiSifr + ucunjiSifir+dordinjiSifir+ sonkySifr;
    cout << sifrlerinJemi;

    return 0;

}