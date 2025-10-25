#include <iostream>

double ctok(double c);
double ktoc(double k);

int main(void){
    std::cout << "Enter the temperature followed by the unit: (c or k): ";
    double temp{0};
    char unit{};
    std::cin >> temp >> unit;

    if (unit == 'c') std::cout << temp << "°C = " << ctok(temp) << " K\n";
    
    else if (unit == 'k') std::cout << temp << " K = " << ktoc(temp) << "°C\n";

    else {
        std::cerr << "'" << unit << "'" << " is not a known temperature unit\n";
        return 1;
    }
    return 0;
}

double ctok(double c){
    if (c < -273.15){
        throw std::runtime_error("Temperature can't be below -273.15°C\n");
    }
    double k = c + 273.15;
    return k;
}
double ktoc(double k){
    if (k < 0){
        throw std::runtime_error("Temperature can't be below 0 K\n");
    }
    double c = k - 273.15;
    return c;
}