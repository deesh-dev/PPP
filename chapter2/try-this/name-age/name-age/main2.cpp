#include <iostream>

int main(void){
    std::cout << "Enter your name and age: ";
    std::string name{""};
    double age{};
    std::cin >> name >> age;

    std::cout << "Hi, " << name << " your age is " << age * 12 << " months\n";
}