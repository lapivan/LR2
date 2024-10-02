#include <iostream>
int main() {
int x, y; //programm 1
std::cout << "Enter x: " << std::endl;
std::cin >> x;
std::cout << "Enter y: " << std::endl;
std::cin >> y;
    if (x>y)
    y = 0;
  else if (x < y) 
  x = 0;
  else {
    x = 0;
    y = 0;
  }
std::cout << "X: " <<  x << " Y: "  <<  y << std::endl;

double a, b, c, k; //programm 2
std::cout << "Enter a: " << std::endl;
std::cin >> a;
std::cout << "Enter b: " << std::endl;
std::cin >> b;
std::cout << "Enter c: " << std::endl;
std::cin >> c;
std::cout << "Enter k: " << std::endl;
std::cin >> k;
a = a-k;
b=b-k;
c=c-k;
std::cout << " A: " <<  a << " B: "  <<  b << " C: " << c ;
    return 0;
}