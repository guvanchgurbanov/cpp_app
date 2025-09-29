//
// Created by Guga on 29-Sep-25.
//    #include <iostream>
    using namespace std;
int main() {

    int a,b;
    cout << "Enter first whole number:";
    cin >> a;
    cout << "Enter second whole number";
    cin >> b;

    if ( a < b ) {
        cout <<"SmallNumber:" <<a<< endl;

    }else if ( a > b) {
        cout <<"SmallNumber:" <<b<< endl;

    }
    return 0 ;

}