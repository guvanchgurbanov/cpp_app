//
// Created by Guga on 26-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    double a;
    cout << "A number enter:";
    cin >>a;
    int n;
    cout <<"N number enter: ";
    cin >> n;

    double result = 1;

    for(int i = 1; i <= n; i++) {
        result = result * i;
    }

    cout << result;

    return 0;
}