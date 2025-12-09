//
// Created by Guga on 09-Dec-25.
//#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "N sany girizin N > K : ";
    cin >> n ;
    cout << "K sany girizin :";
    cin >> k ;

    int quotient = 0;
    int remainder = n;


    while (remainder >= k) {
        remainder = remainder - k;
        quotient++;
    }
    cout << "pay: " << quotient << endl;
    cout << "Galyndy: " << remainder << endl;

    return 0;
}