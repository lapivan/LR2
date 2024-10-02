#include <iostream>
double mysqrt(double x) {
   int terms = 20;
    double guess = x / 2.0; // Начинаем с половины числа
    double previous_guess=0;

    for (int i = 0; i < terms; ++i) {
         if (guess == previous_guess)
            break;
       previous_guess = guess;
        guess = (guess + x / guess) / 2.0; // Метод Ньютона
//        if (guess == previous_guess)
//            break;
    }

    return guess;
}
int main() {
    double x1, y1, r1; // 1 curcle
    double x2, y2, r2; // 2 curcle
    double l1; // distance between centers
    std::cout << "Enter x1 ";
    std::cin >> x1;
    std::cout << "Enter y1 ";
    std::cin >> y1;
    std::cout << "Enter r1 ";
    std::cin >> r1;
    std::cout << "Enter x2 ";
    std::cin >> x2;
    std::cout << "Enter y2 ";
    std::cin >> y2;
    std::cout << "Enter r2 ";
    std::cin >> r2;
    l1 = mysqrt((x2 - x1) * (x2 - x1)+ (y2 - y1) * (y2 - y1));
    
     if (l1 + r1 < r2) {
        std::cout << "Да";
    }
    else if (l1 + r2 < r1) {
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl;
    }
    else if (l1 < (r1 + r2) ) {
        std::cout << "Фигуры пересекаются " << std::endl;
    }
   
    else if (l1 == 0 ) {
        if (r1 < r2)
        std::cout << "Да ";
        else if (r1 > r2)
        std::cout << "Да, но справедливо обратное для двух фигур";
        else
        std::cout << "Фигуры пересекаются";

    }
       
    else
    std::cout << "Ни одно из условий не выполняется" << std::endl;
    return 0;
}