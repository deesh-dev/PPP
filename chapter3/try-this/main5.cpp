#include <iostream>

int square(int num);

int main(void){
    for(int i = 0; i < 100; i++){
        std::cout << i << '\t' << square(i) << '\n';
    }
}

int square(int num){
    int sum{0};
    for (int i = 0; i < num; i++){
        sum+= num;
    }
    return sum;
}