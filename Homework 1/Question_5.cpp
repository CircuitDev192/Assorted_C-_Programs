#include <iostream>

int main() {

    int area = 0;
    int length;
    int width;

    std::cout << "Enter the length of the rectangle: " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: " << std::endl;
    std::cin >> width;

    area = length * width;

    std::cout << "Your area is: " << area << std::endl;

    return 0;
}
