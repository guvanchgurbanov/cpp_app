//
// Created by Guga on 22-Nov-25.
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
    double result = 1.0;
    double current_power = 1.0;
    for(int i = 1; i <= n; ++i) {
        current_power *= a ;
        result += current_power;

        cout << "Total number: " << result << endl;
    }
    return 0;
}