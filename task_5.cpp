#include <iostream>
int main() {
    float x, y, z;
    int s;
    bool a;
    char c = '>';

    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    z = x - y;
    s = (int)z & 0x80000000;
    a = (bool)s;

    std::cout << "x " << (char )(c-(char)a-(char)a) << " y" << std::endl; 
    return 0;
}