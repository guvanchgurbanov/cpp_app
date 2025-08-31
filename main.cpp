#include <iostream>

using namespace std;

int main() {
    int a {};
    cin >> a;

    int birinjiSifr = a / 100;
    int ortaSifr = ( a / 10) % 10;
    int sonkySifr = a % 10;

    int sifrlerinJemi = birinjiSifr + sonkySifr + ortaSifr;
    cout << sifrlerinJemi;

    return 0;

}