#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    std::cout << "Enter three string values: ";
    std::vector <std::string> strings;
    std::string x, y, z;
    std::cin >> x >> y >> z;
    strings.push_back(x);
    strings.push_back(y);
    strings.push_back(z);

    std::sort(strings.begin(), strings.end());
    for (int i = 0; i < strings.size(); i++) std::cout << strings[i] << ' ' ;
    std::cout << '\n';
}