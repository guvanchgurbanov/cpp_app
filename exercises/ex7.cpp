#include <iostream>

using namespace std;
int main(){
    int ikibelgilisan;
    cin >> ikibelgilisan;


    int birinjiSifr =ikibelgilisan  / 10;
    int ikinjiSifr =ikibelgilisan % 10 ;
    int ikisininJemi = birinjiSifr + ikinjiSifr;
    cout << ikisininJemi << endl;

    int kopeltmekhasyl = birinjiSifr * ikinjiSifr;
    cout << kopeltmekhasyl << endl;

    return 0;
}