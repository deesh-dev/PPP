#include <iostream>

int main(void){
    int i = 0;
    while (i < 26){
        std::cout << char('a' + i) << '\t' << int('a' + i) << '\n'; 
        i++;
    }
    return 0;
}
