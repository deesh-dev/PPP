#include <iostream>

int main(void){
    char operation{};
    double num1 {};
    double num2 {}; 

    std::cout << "Enter the mathematical expression: ";
    std::cin >> num1 >> operation >> num2;
    
    switch (operation){
        case ('+') : 
        {
            std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << ".\n";
            break;
        }
        case ('-') :
        {
            std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << ".\n";
            break;
        }
        case ('*') :
        {
            std::cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << ".\n";
            break;
        }
        case ('/') :
        {
            std::cout << "The division of " << num1 << " by " << num2 << " is " << num1 / num2 << ".\n";
        }
    }
    return 0;
}