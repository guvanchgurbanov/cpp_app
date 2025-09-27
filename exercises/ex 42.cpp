//
// Created by Guga on 26-Sep-25.
// #include <iostream>

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

    if ( a > 0 ) {
        positiveCount++;
    }if ( b > 0 ){
        positiveCount++;
    }if ( c > 0 ){
        positiveCount++;
    }

    cout << positiveCount;

    return 0 ;
}