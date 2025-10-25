#include <iostream>

double ctof(double c);
double ftoc(double f);

int main(void){
    std::cout << "Enter the temperature followed by the unit: (c or f): ";
    double temp{0};
    char unit{};
    std::cin >> temp >> unit;

    if (unit == 'c') std::cout << temp << "°C = " << ctof(temp) << "°F\n";
    
    else if (unit == 'f') std::cout << temp << "°F = " << ftoc(temp) << "°C\n";

    else {
        std::cerr << "'" << unit << "'" << " is not a known temperature unit\n";
        return 1;
    }
    return 0;
}

double ftoc(double f){
    if (f < -459.67){
        throw std::runtime_error("Temperature can't be below -459.67°F\n");
    }
    double c = (f - 32) / 1.8;
    return c;

}
double ctof(double c){
    if (c < -273.15){
        throw std::runtime_error("Temperature can't be below -273.15°C\n");
    }
    double f = 1.8 * c + 32;
    return f;
}