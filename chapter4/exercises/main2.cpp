#include <iostream>

double ctok(double c);

int main()
{
    double c{0};  // declare input variable
    std::cout << "Enter the celcius temperature: ";
    std::cin >> c;
    std::cout << c << "°C = " << ctok(c) << " K\n";

}

double ctok(double c)                 // converts Celsius to Kelvin
{
    double k = c + 273.25;
    return k;
}