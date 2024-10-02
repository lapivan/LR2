#include <iostream>
int main () {
    float a, b; 
    float result;
    std::cout << a  << std::endl; 
    std::cout << b  << std::endl; 
    std::cout << "enter a: ";
    std::cin >> a;
    std::cout << "enter b: ";
    std::cin >> b;
    a += b;
    b /= a;
    b++;
    b /= 5;
    result = a * b;
    while (result < a + b) {
        result = result + (a - b);
        std :: cout  << result << std::endl;
    }
    std::cout << "result: " << result;
    return 0;
} 