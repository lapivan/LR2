#include <iostream>
int main() {
    double x, y;
    bool a;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    if(x > y) 
    a = true;
    else 
    a = false;
    
    if (a == true) 
    std::cout << "x > y" << std::endl;
     if (a == false) 
    std::cout << "x < y" << std::endl; 
    return 0;
}