#include <iostream>

int main(void){
    int numbersInputted{0};
    double num{};
    double largestSoFar{0};
    double smallestSoFar{0};

    while(std::cin >> num){
        if (largestSoFar == 0 && smallestSoFar == 0 && numbersInputted == 0){
            largestSoFar = smallestSoFar = num;
        }
        else{
            if (num > largestSoFar) largestSoFar = num;
            if (num < smallestSoFar) smallestSoFar = num;
        }
        
        if (num == largestSoFar && num == smallestSoFar) std::cout << "Value entered: " << num << "(First value)\n";
        else if (num == largestSoFar) std::cout << "Value entered: " << num << " (Largest so far)\n";
        else if (num == smallestSoFar) std::cout << "Value entered: " << num << " (Smallest so far)\n";
        else std::cout << "Value entered: " << num << '\n';

        numbersInputted++;
    }
    return 0;
}