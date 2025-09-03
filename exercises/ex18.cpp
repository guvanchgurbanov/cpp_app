//
// Created by Guga on 02-Sep-25.
//#include <iostream>

using namespace std;
int main(){
    int dortBelgilisan;
    cin >> dortBelgilisan;

    int birinjiSifr = dortBelgilisan / 1000;
    int ikinjiSifr  = (dortBelgilisan / 1000 ) % 10;
    int ucinjiSifr = dortBelgilisan % 10;

    cout  << ikinjiSifr << endl;

    return 0;
}