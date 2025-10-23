#include <iostream>
#include <vector>
#include <string>

int main(void){
    std::vector <std::string> numStr{"zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"};
    
    std::cout << "Enter the number: ";
    std::string userInput{};
    std::cin >> userInput;
    
    for (int i = 0; i < numStr.size(); i++){
        if (numStr[i] == userInput) {
            std::cout << i << '\n';
            break;
        }
        else if (numStr[i] != userInput && i == numStr.size() - 1){
            std::cout << numStr[std::stoi(userInput)] << '\n';
        }
    }
    return 0;
}