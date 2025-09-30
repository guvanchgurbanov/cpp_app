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

    if ( a > b ) {
        cout <<"HighNumber:"<<a<< endl << "SmallNumber:" << b <<endl;

    }else {
        cout <<"HighNumber:"<<b<< endl << "SmallNumber:" << a <<endl;
    }
    return 0 ;

}