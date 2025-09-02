#include <iostream>

using namespace std;
int main(){
    int ucBelgilisan;
    cin >> ucBelgilisan;

    int birinjiSifr = ucBelgilisan / 100;
    int ikinjiSifr  = (ucBelgilisan / 10 ) % 10;
    int ucinjiSifr = ucBelgilisan % 10;

    cout  << ucinjiSifr << birinjiSifr << ikinjiSifr  << endl;

    return 0;
}