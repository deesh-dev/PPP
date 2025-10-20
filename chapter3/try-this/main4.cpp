#include <iostream>

int main(void){
    for (int i = 0; i < 26; i++) std::cout << char('a' + i) << '\t' << int('a' + i) << '\n'; 
    
    for (int i = 0; i < 26; i++) std::cout << char('A' + i) << '\t' << int('A' + i) << '\n';
    return 0;
}
