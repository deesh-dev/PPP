#include <iostream>

int main(void){
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    if (num % 2 == 0) std::cout << "The value " << num << " is an even number.\n";
    else std::cout << "The value " << num << " is an odd number.\n";
}