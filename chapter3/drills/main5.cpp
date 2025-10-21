#include <iostream>

int main(void){
    double num1{};
    double num2{};
    while(std::cin >> num1 >> num2){

        if (abs(num1 - num2) < 1.0 && num1 - num2 != 0) {
            std::cout << "The numbers are almost equal.\n";
            continue;}

        if (num1 > num2){
            std::cout << "The smaller value is: " << num2 << '\n';
            std::cout << "The larger value is: " << num1 << '\n';
        }
        if (num1 < num2){
            std::cout << "The smaller value is: " << num1 << '\n';
            std::cout << "The larger value is: " << num2 << '\n';
        }
        else if(num1 == num2) std::cout << "The numbers are equal.\n";

        
    }
    return 0;
}