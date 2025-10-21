#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    std::vector <double> numEntered{};
    double sum{0};
    int numbersInputted{0};
    double num{};
    std::string unit{};
    double largestSoFar{0};
    double smallestSoFar{0};

    while(std::cin >> num >> unit){
        if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
            std::cout << "That's not a valid unit\n";
            break;
        }
        else {
            if (unit == "cm") num *= 0.01;
            if (unit == "in") num *= 2.54 * 0.01;
            if (unit == "ft") num *= 12 * 2.54 * 0.01;
            if (unit == "m") num *= 1;
        }

        if (largestSoFar == 0 && smallestSoFar == 0 && numbersInputted == 0){
            largestSoFar = smallestSoFar = num;
        }
        else{
            if (num > largestSoFar) largestSoFar = num;
            if (num < smallestSoFar) smallestSoFar = num;
        }
        

        numEntered.push_back(num);
        numbersInputted++;
    }

    std::sort(numEntered.begin(), numEntered.end());
    std::cout << "Smallest value: " << smallestSoFar << " meters.\n";
    std::cout << "Largest value: " << largestSoFar << " meters.\n";
    std::cout << "Number of values: " << numbersInputted << '\n';
    std::cout << "Values entered: ";
    for (double num : numEntered) std::cout << num << "  ";
    std::cout << '\n';

    return 0;
}
