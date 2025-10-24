#include <iostream>
#include <cmath>

int main(void){
    int intSum{0};
    int intCurrentSquare{1};
    while (intCurrentSquare <= 64){
        intSum += pow(2, intCurrentSquare);
        std::cout << intCurrentSquare << '\t' << intSum << '\n';
        intCurrentSquare++;
    } // Largest number of squares for which we can calculate the exact number of grains using int is: 30.

    double doubleSum{0};
    double doubleCurrentSquare{1};
    while (doubleCurrentSquare <= 64){
        doubleSum += pow(2, doubleCurrentSquare);
        std::cout << doubleCurrentSquare << '\t' << doubleSum << '\n';
        doubleCurrentSquare++;
    }
}
