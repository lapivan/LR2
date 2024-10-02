#include <iostream> 
double func(double x) {
    double y = x * (23 * x * x + 69 * x + 32) + 8;
    return y;
} 
int main() {
double x, res1, res2; 
std::cout << "Введите значение числа x: " << std::endl;
std::cin >> x;

res1 = func(x);
res2 = func(-x);
std::cout<< "Результат 1: " << res1 << std::endl << "Результат 2: " << res2 << std::endl;
return 0;
}