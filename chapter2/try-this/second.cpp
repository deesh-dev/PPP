#include <iostream>
#include <cmath>

int main(void){
    std::cout << "Please enter an integer: ";
    int n {};
    std::cin >> n;
    std::cout << n << " squared is " << n*n << '\n';
    std::cout << n << " % 2 = " << n % 2 << '\n';
    std::cout << "Square root of " << n << " is " << pow(n, 0.5) << '\n';
}