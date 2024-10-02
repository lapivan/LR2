#include <iostream>

int main() {
    int n = 13;
    double b1, s;
    double q = 1.0/((double)n+1.0);
    std::cout << "Введите первый член прогрессии: " << std::endl;
    std::cin >> b1;
    s = (b1 / (1.0 - q));
    std::cout << "Сумма членов прогрессии равна: " << s << std::endl;
    return 0;
}