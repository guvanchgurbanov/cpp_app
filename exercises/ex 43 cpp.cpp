//
// Created by Guga on 28-Sep-25.
#include <iostream>


using namespace std;
int main() {
    int a,b,c;
    cout << "Enter first whole number:";
    cin >> a;
    cout << "Enter second whole number";
    cin >> b;
    cout << "Enter third whole number";
    cin >> c;

    int positiveCount = 0;
    int negativeCount = 0;

    if ( a > 0 ) {
        positiveCount++;
    }else if ( a < 0){
        negativeCount++;
    }

    if ( b > 0 ) {
        positiveCount++;
    }else if (b < 0) {
        negativeCount++;
    }

    if ( c > 0 ) {
        positiveCount++;
    }else if ( c < 0){
        negativeCount++;
    }

    cout << "Polozitel: " << positiveCount << endl;
    cout << "Otrisatel: " << negativeCount << endl;
    return 0 ;
}