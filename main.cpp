#include <iostream>

using namespace std;

int main() {
    int n {};
    cin >> n;

    int birinjiSifr = n / 10;
    int sonkySifr = n % 10;

    int sifrlerinJemi = birinjiSifr + sonkySifr;
    cout << sifrlerinJemi;

    return 0;

}