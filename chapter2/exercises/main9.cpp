#include <iostream>

int main(void){
    std::cout << "Enter the number: ";
    std::string num;
    std::cin >> num;

    if (num == "zero") std::cout << 0 << '\n';
    else if (num == "one") std::cout << 1 << '\n';
    else if (num == "two") std::cout << 2 << '\n';
    else if (num == "three") std::cout << 3 << '\n';
    else if (num == "four") std::cout << 4 << '\n';

    else if (num == "0") std::cout << "zero\n";
    else if (num == "1") std::cout << "one\n";
    else if (num == "2") std::cout << "two\n";
    else if (num == "3") std::cout << "three\n";
    else if (num == "4") std::cout << "four\n";

    else std::cout << "Not a number I know\n";
}