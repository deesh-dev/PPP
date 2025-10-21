#include <iostream>

int main(void){
    std::string word{};
    std::cout << "Enter a word: ";
    std::cin >> word;
    for (char letter : word) std::cout << letter << '\t' << int(letter) << '\n';

    return 0;
}
