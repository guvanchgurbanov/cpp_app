//
// Created by Guga on 01-Oct-25.
//    #include <iostream>
    using namespace std;
int main() {

    int a,b;
    cout << "1nji sany giriz: " ;
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;

    int min = a;
    if ( b < min) {
        min = b;
    }

    int max = a;
    if (b > max) {
        max = b;
    }

    a = min;
    b = max;

    cout << a << ", " << b << endl;

    return 0 ;

}