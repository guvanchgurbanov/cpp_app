//
// Created by Guga on 10-Nov-25.
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
    if ( n > 0) {
        for(int i = 1; i <= n; i++) {
            result *=a;
            cout << i << " ";
        }
        cout << endl;
        cout << "Total number: " << result << endl;
    }
    return 0;
}