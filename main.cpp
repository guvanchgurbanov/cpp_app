#include <iostream>

using namespace std;

int main() {
    double a;
    cout << "A number enter:";
    cin >>a;
    int n;
    cout <<"N number enter: ";
    cin >> n;

    if (n <= 0) {
    double result = 1.0;
        double current_power = 1.0;
        for(int i = 1; i <= n; ++i) {

            current_power *= a ;
            result += current_power;

        cout << "Total number: " << result << endl;
    }
    }
    return 0;
}