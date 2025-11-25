//
// Created by Guga on 25-Nov-25.
//#include <iostream>

using namespace std;

int main() {
    double a;
    cout << "A number enter:";
    cin >>a;
    int n;
    cout <<"N number enter: ";
    cin >> n;

    if (n <= 0) {
        cout << "N must be > 0" << endl;
        return 0;
    }
    int sum = 1;
    int current_power = 1;
    int sign = -1;
    for(int i = 1; i <= n; ++i) {
        current_power = current_power * a;
        sum = sum + sign * current_power ;
        sign= -sign;

        cout << "Total number: " << sum << endl;
    }
    return 0;
}