#include <iostream>

int main() {
int h1, min1, h2, min2, time1, time2, delta, h3, min3;
std::cout << "Сколько часов показывали электронные часы сначала: ";
std::cin >> h1 ;
std::cout << "Сколько минут показывали электронные часы сначала: ";
std::cin >> min1;
std::cout << "Сколько часов показывали электронные часы в конце: ";
std::cin >> h2 ;
std::cout << "Сколько минут показывали электронные часы в конце: ";
std::cin >> min2;
time1 = h1 * 60 + min1;
time2 = h2 * 60 + min2;
delta = time2 - time1;
h3 = delta / 60;
min3 = delta % 60;
std::cout << "Ученик решал задачу " << h3 << " часов "  << min3 << " минут";
return 0;
}