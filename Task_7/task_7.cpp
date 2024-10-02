#include <iostream>
int main() {
    float a, b, c, y;
    int n;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter n: " << std::endl;
    std::cin >> n;
    switch (n) {
        case 2: {y = b * c - a * a;
        break;}
        case 56: {y = b * c;
        break;}
        case 7: {y = a * a + c;
        break;}
        case 3: {y = a - b * c;
        break;}
        default: y = (a+b) * (a+b) * (a+ b);
    }
    std::cout << "y: " << y;
    return 0;
}