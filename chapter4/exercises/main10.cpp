#include <iostream>
#include <vector>

int main(void){
    double sum{0};
    std::vector <double> numbers{};
    std::cout << "Please enter the number of values you want to sum: ";
    int numValues{0};
    std::cin >> numValues;

    std::cout << "Please enter some integers (press '|' to stop): ";
    for(double num; std::cin >> num;){
        std::cout << "Please enter some integers (press '|' to stop): ";
        numbers.push_back(num);
    }

    if (numValues > numbers.size()){
        std::cerr << "Not enough values provided\n";
        return 1;
    }
    for (int i = 0; i < numValues; i++){
        sum += numbers[i];
    }

    std::cout << "The sum of the first " << numValues << " numbers " << "( ";
    for (int i = 0; i < numValues; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << ")" << " is " << sum << '\n';

    std::vector <double> adjancentDifference(numbers.size() - 1);
    for (int i = 0 ; i < adjancentDifference.size(); i++){
        adjancentDifference[i] = numbers[i] - numbers[i + 1];
    } 
    std::cout << "( ";
    for (double num : adjancentDifference) std::cout << num << ' ';
    std::cout << ")" << '\n';

    return 0;
}

