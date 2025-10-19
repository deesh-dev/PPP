#include <iostream>

int main(void){
    std::cout << "Enter the number of miles: ";
    int miles{};
    std::cin >> miles;
    
    std::cout << miles << " miles " << " = " << miles * 1.609 << " Km\n";
}