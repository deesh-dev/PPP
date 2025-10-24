#include <iostream>
#include <vector>

int main() {
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

    for (int i = 0; i < names.size(); i++) {
        std::cout << names[i] << '\t' << scores[i] << '\n';
    }

    return 0;
}