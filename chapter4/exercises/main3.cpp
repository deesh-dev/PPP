#include <iostream>

double ctok(double c);

int main()
{
    double c{0};  // declare input variable
    std::cout << "Enter the celcius temperature: ";
    std::cin >> c;
    if (c < -273.15){
        throw std::runtime_error("Temperature can't be below -273.15°C\n");
    }
    std::cout << c << "°C = " << ctok(c) << " K\n";
}
double ctok(double c)                 // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}