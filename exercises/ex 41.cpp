//
// Created by Guga on 26-Sep-25.
// #include <iostream>

using namespace std;
int main() {
    int b;
    cout << "Enter whole number:";
    cin >> b;

    if ( b > 0 ) {
        cout << b + 1 << endl;

    }else if (b == 0){
        cout << "Answer: 10" << endl;

    }else {
        cout << b - 2 << endl;
    }

    return 0 ;
}