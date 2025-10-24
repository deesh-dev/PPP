#include <iostream>
#include <vector>

int main(void){
    std::vector<std::string> names;
    std::vector<int> scores;
    std::string name;
    int score;

    std::cout << "Enter the name followed by the score: ";

    while (std::cin >> name >> score) {
        if (name == "NoName" && score == 0) break;

        for (int i = 0; i < names.size(); i++) {
            if (names[i] == name) {
                std::cout << "Error: Same name detected. Exiting program\n";
                return 1;
            }
        }

        names.push_back(name);
        scores.push_back(score);
        std::cout << "Enter the name followed by the score: ";
    }

    std::cout << "Enter the score: ";

    for (int userInput; std::cin >> userInput;){
        for (int i = 0 ; i < scores.size(); i++){
            if (userInput == 0){
                return 0;
            }
            else if (userInput == scores[i]){
                std::cout << "Score of " << names[i] << " : " << scores[i] << '\n';
                
            }
        }
        std::cout << "Enter the score: ";
    }
    return 0;
}