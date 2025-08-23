#include <iostream>

using namespace std;

int main() {
    int x ;
    cout << "Enter the number: ";
    cin  >> x;

    int z = x % 10;
    std::cout  << "Last digit: " << z << endl ;



    return 0;
}