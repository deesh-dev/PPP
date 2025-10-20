#include <iostream>

int main(void){
    constexpr double yenPerDollar = 0.00657;
    constexpr double kronePerDollar = 0.0991;
    constexpr double poundPerDollar = 1.333;
    constexpr double FrancPerDollar = 1.26;

    char currency{};
    double value{};
    std::cout << "Enter the value followed by currency: ";
    std::cin >> value >> currency;

    switch (currency){
        case 'y':
            std::cout << value << " yen = " << value * yenPerDollar << " dollars\n";
            break;
        case 'k':
            std::cout << value << " krone = " << value * kronePerDollar << " dollars\n";
            break;
        case 'p':
            std::cout << value << " pound = " << value * poundPerDollar << " dollars\n";
            break;
        case 'f':
            std::cout << value << " francs = " << value * FrancPerDollar << " dollars\n";
            break;
        default:
            std::cout << "Sorry I don't know any currency called " << currency << '\n';
    }
}