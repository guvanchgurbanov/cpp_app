//
// Created by Guga on 02-Sep-25.
//#include <iostream>

using namespace std;
int main(){
    int ucBelgilisan;
    cin >> ucBelgilisan;

    int birinjiSifr = ucBelgilisan / 100;
    int ikinjiSifr  = (ucBelgilisan / 10 ) % 10;
    int ucinjiSifr = ucBelgilisan % 10;

    cout  << birinjiSifr << ucinjiSifr  << ikinjiSifr  << endl;

    return 0;
}