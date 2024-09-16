#include <iostream>
int main() {
    double x, y;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    if (x>y) 
    std::cout << "x > y" << std::endl;
    else 
    std::cout << "x < y" << std::endl; 
    std::cout << "Hello world!";
    return 0;
}