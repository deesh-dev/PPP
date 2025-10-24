#include <iostream>
#include <vector>

bool isPrime(int num);

int main(void){
    std::vector <int> primeNum{};

    for (int i = 2; i < 100; i++){
        if (isPrime(i)) primeNum.push_back(i);
    }
    
    for (int num: primeNum) std::cout << num << '\n';
}

bool isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0) return false;
    }
    return true;
}