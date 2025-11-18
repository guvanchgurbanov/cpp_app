//
// Created by Guga on 08-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int n;
    cout <<"N number enter: ";
    cin >> n;

    int total = 0;
    cout << "Numbers:";
    for (int i = 1; i <= n ; i++) {
        cout <<i;
        total += i;
    }
    cout << endl;
    cout << "Total number: " << total << endl;

    return 0;
}