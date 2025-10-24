#include <iostream>
#include <vector>
#include <cmath>

int main(void){
    int num{};
    std::cout << "Input the number till which you want the primes: ";
    std::cin >> num;

    std::vector <bool> booleanVector {};
    std::vector <int> primeNum{};
    for (int i = 0; i <= num; i++) booleanVector.push_back(true);
    booleanVector[0] = booleanVector[1] = false;

    for (int i = 0; i < booleanVector.size(); i++){
        if (booleanVector[i] == true){
            for (int k = 2; k * i < booleanVector.size();  k++){
                booleanVector[k * i] = false;
            }
        }
    }

    for (int i = 0; i < booleanVector.size(); i++){
        if (booleanVector[i] == true) primeNum.push_back(i);
    }

    for (int num : primeNum) std::cout << num << '\n';


}