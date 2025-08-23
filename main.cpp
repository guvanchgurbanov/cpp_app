#include <iostream>

using namespace std;

int main() {
    double width;
    std::cout << "Enter the width: ";
    std::cin >> width;

    double length;
    std::cout << "Enter the length: ";
    std::cin >> length;

    double height;
    std::cout << "Enter the height: ";
    std::cin >> height;

    double volume = height * length * width;
    std::cout << "Volume = " << volume << " meter cube " << endl;

    return 0;
}