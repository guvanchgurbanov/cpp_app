//
// Created by Guga on 02-Dec-25.
//#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout <<"N number enter: ";
    cin >> a;
    cout <<"B number enter:";
    cin >> b;


    for (int i = a; i > b; i--) {

        for (int j = 0; j < i; j++) {
            cout << i << " ";
        }
        cout << endl ;
    }
    return 0;
}