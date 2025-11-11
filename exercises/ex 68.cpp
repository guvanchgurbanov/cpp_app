//
// Created by Guga on 04-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "A bitin san girz:";
    cin >> a;
    int b;
    cout << "B bitin san girz:";
    cin >>b;

    for (int i = b; i >= a; i--)
        cout << i << endl;

    return 0;
}