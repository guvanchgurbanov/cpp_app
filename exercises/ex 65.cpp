//
// Created by Guga on 04-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int san;
    cout << "1-999 Enter number: ";
    cin >> san;

    if (san < 1 || san > 999) {
        cout << "False number ";
        return 0;

    }

    if (san <= 9) {
        cout << "one-digit";
    } else if (san >= 10 && san <= 99) {
        cout << "two-digit";
    } else {
        cout << "three-digit";
    }

    return 0;
}