//
// Created by Guga on 03-Oct-25.
//    #include <iostream>

    using namespace std;

int main() {
    int a, b;

    cout << "1nji sany giriz: ";
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;


    if (a == b) {
        a = 0;
        b = 0;
    } else {
        int max = a;
        if (b > max) {
            max = b;
        }

        a = max;
        b = max;
    }

    cout << a << ", " << b << endl;

    return 0 ;

}