//
// Created by Guga on 09-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    double n;
    cout <<"N number enter: ";
    cin >> n;

    double total = 1.0;
    double gosulyjy = 1.0;
    cout << "Numbers: ";
    for (int i = 1; i <= n ; i++) {
        gosulyjy += 0.1;
        char belgi = i == n ? ' ' : '*';
        cout << gosulyjy << belgi;
        total = total * gosulyjy;
    }
    cout << endl;
    cout << "Total number: " << total << endl;

    return 0;
}