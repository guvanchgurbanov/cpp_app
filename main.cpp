#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    short minValue = 1;
    short maxValue = 6;

    srand(time(0));

    short first = rand() % (maxValue - minValue + minValue);
    short second = rand() % (maxValue - minValue + minValue);

    cout << first << ", " << second << endl;

    return 0;
}