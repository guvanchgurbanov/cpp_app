//
// Created by Guga on 03-Dec-25.
//#include <iostream>

using namespace std;

int main() {
    int a,b;
    cout <<"N number enter: ";
    cin >> a;
    cout <<"B number enter:";
    cin >> b;

    int k = 1;

    for (int i = a; i <= b; i++) {

        for (int j = 0; j < k; j++) {
            cout << i << " ";
        }

        cout << endl ;
        k++;
    }
    return 0;
}