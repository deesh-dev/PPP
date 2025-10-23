#include <iostream>
#include <vector>
#include <string>

int main(void){
    std::vector <std::string> numStr{"zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"};
    std::string num1Str, num2Str;
    int num1, num2{};
    char operation{};

    std::cout << "Enter the expression: ";
    std::cin >> num1Str >> operation >> num2Str;
    
    for (int i = 0; i < numStr.size(); i++){
        if (numStr[i] == num1Str) {
            num1 = i ;
            break;
        }
        else if (numStr[i] != num1Str && i == numStr.size() - 1){
            num1 =  std::stoi(num1Str) ;
        }
    }
    for (int i = 0; i < numStr.size(); i++){
        if (numStr[i] == num2Str) {
            num2 = i ;
            break;
        }
        else if (numStr[i] != num2Str && i == numStr.size() - 1){
            num2 =  std::stoi(num2Str) ;
        }
    }
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