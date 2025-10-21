#include <iostream>
#include <vector>

int main(void){
    std::vector <std::string> wordsToPrint{};
    std::vector <std::string> forbiddenWords{"Broccoli", "Apple", "Banana"};
    for (std::string word; std::cin >> word;){
        for (int i = 0; i < forbiddenWords.size(); i++){
            if (word == forbiddenWords[i]){
                wordsToPrint.push_back("BLEEP");
                break;
            }
            //If the word is not in forbidden words and i has reached the last element then it should be printed as is.
            else if (word != forbiddenWords[i] && i == forbiddenWords.size() - 1){
                wordsToPrint.push_back(word);
                break;
            }
        }
    }
    std::cout << "\n\n\n\n\n\n";
    for (std::string word : wordsToPrint) std::cout << word << '\n';
    return 0;
}