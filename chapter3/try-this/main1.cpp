#include <iostream>

int main(void){
    constexpr double yenPerDollar = 0.00657;
    constexpr double kronePerDollar = 0.0991;
    constexpr double poundPerDollar = 1.333;

    std::string currency{};
    double value{};
    std::cout << "Enter the value followed by currency: ";
    std::cin >> value >> currency;

    if (currency == "yen") std::cout << value << " yen = " << value * yenPerDollar << " dollars\n";
    else if (currency == "krone") std::cout << value << " krone = " << value * kronePerDollar << " dollars\n";
    else if (currency == "pound") std::cout << value << " pound = " << value * poundPerDollar << " dollars\n";
    else std::cout << "I don't know any '" << currency << "' currency\n";

    return 0;
}