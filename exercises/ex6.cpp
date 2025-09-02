#include <iostream>

using namespace std;
int main(){
int ikibelgilisan;
cin >> ikibelgilisan;


int cepkiSifr =ikibelgilisan / 10;
int sagkySifr =ikibelgilisan % 10;

cout << cepkiSifr << endl << sagkySifr  << endl;

return 0;
}