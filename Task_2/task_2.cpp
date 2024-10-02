#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Введите значение стороны: ";
    std::cin >> a;
    std::cout << "Введите значение стороны: ";
    std::cin >> b;
    std::cout << "Введите значение стороны: ";
    std::cin >> c;
    if ((a + b > c) & (a + c > b) & (c + b > a)) {
        std::cout << "Треугольник существует";
    }
    else
    std::cout << "Треугольник не существует";
    return 0;
}