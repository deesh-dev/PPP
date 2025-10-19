#include <iostream>

int main(void){
    std::cout << "Please enter your name and age: ";
    std::string name{""};
    int age{};
    std::cin >> name >> age;
    std::cout << "Hi, " << name << " your age is " << age * 12 << " months\n";
}