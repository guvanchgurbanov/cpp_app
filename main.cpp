#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand (time(0));
    short first = (rand() % 6) + 1;
    short second = (rand() % 6) + 1;

    cout <<first << " , " << second;

    return 0;

}