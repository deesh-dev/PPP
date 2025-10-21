#include <iostream>

int main(void){
    int num1{};
    int num2{};
    while(std::cin >> num1 >> num2){
        std::cout << "Num1 = " << num1 << " Num2 = " << num2 << '\n';
    }
    return 0;
}