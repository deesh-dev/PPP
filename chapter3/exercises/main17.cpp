#include <iostream>
#include <cmath>

int main(void){
    std::cout << "Enter the value of a, b and c (in the expression ax² + bx + c): ";
    double a{};
    double b{};
    double c{};
    std::cin >> a >> b >> c;
    double D {pow(b, 2) - (4 * a * c)};

    if (D < 0) {
        std::cout << "There are no real roots to the equation: "
        << a << "x²" << " + " << b << "x" << " + " << c << " = 0 " << '\n';

        return 1;
    }

    double root1 = (-1 * b - sqrt(D)) / 2 * a;
    double root2 = (-1 * b + sqrt(D)) / 2 * a;
    
    std::cout << "The roots to the equation: "
    << a << "x²" << " + " << b << "x" << " + " << c << " = 0 "
    << "are " << root1 << " and " << root2 << '\n';


}