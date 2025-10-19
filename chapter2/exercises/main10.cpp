#include <iostream>

int main(void){
    std::cout << "Enter the operand followed by two float numbers: ";
    char operation;
    double num1, num2;
    std::cin >> operation >> num1 >> num2;

    if (operation == '+') std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << '\n';
    if (operation == '-') std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << '\n';
    if (operation == '/') std::cout << "The division of " << num1 << " by " << num2 << " is " << num1 / num2 << '\n';
    if (operation == '*') std::cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << '\n';

}