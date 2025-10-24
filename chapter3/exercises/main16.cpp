#include <iostream>
#include <vector>

int main(void){
    std::string highest{};
    int highestNum{0};
    std::string lowest{};;
    int highestIndex{};
    std::string min{};
    std::string max{};
    std::vector <std::string> words;
    std::vector <int> count{};

    for (std::string word; std::cin >> word;){
        if (words.size() == 0) lowest = highest = word;
        words.push_back(word);
    }

    for (std::string word : words){
        if (word > highest) highest = word;
        if (word < lowest) lowest = word;
    }

    for (int i = 0; i < words.size(); i++) count.push_back(0);

    for (int i = 0; i < words.size(); i++){
        for (int k = 0; k < words.size(); k++){
            if (words[i] == words[k]) count[i]++;
        }
    }
    for (int x : count){
        if (x > highestNum) highestNum = x;
    }
    for (int i = 0; i < count.size(); i++){
        if (count[i] == highestNum) highestIndex = i;
    }
    std::cout << "Min: " << lowest << '\n';
    std::cout << "Max: " << highest << '\n';
    std::cout << "Mode: " << words[highestIndex] << '\n';

    return 0;
}