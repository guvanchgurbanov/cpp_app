//
// Created by Guga on 08-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout <<"A number enter: ";
    cin >> a;
    cout <<"B number enter: ";
    cin >> b;

    int total = 0;
    cout << "Numbers: ";
    for (int i = a; i <= b ; i++) {
        cout <<i;
        total += i * i;
    }
    cout << endl;
    cout << "Total square number: " << total << endl;

    return 0;
}