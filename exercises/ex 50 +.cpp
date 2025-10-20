//
// Created by Guga on 20-Oct-25.
//    #include <iostream>

    using namespace std;

int main() {
    int a, b, c;

    cout << "1nji sany giriz: ";
    cin >> a;
    cout << "2nji sany giriz: ";
    cin >> b;
    cout << "3nji sany giriz: ";
    cin >> c;

    int kici = a;

    if(kici > b) {
        kici = b;
    }if (kici > c) {
        kici = c;
    }
    cout << "In kici san: "<< kici;

    return 0;
}