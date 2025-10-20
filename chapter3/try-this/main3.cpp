#include <iostream>

int main(void){
    for (int i = 0; i < 26; i++){
        int value_of_a = 97;
        std::cout << char(value_of_a + i) << '\t' << int('a' + i) << '\n'; 
    }
    return 0;
}