#include <iostream>

int main(void){
    std::cout << "Enter two integer values: ";
    int val1{};
    int val2{};
    std::cin >> val1 >> val2;

    if (val1 > val2){
        std::cout << val1 << " is greater than " << val2 << '\n';
        std::cout << val2 << " is smaller than " << val1 << '\n';
    }
    else{
        std::cout << val2 << " is greater than " << val1 << '\n';
        std::cout << val1 << " is smaller than " << val2 << '\n';
    }
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
        std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
        std::cout << val1 << " / " << val2 << " / " << val1 / val2 << '\n';
        std::cout << val1 << " * " << val2 << " * " << val1 * val2 << '\n';
}