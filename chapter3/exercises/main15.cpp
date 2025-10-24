#include <iostream>
#include <vector>

int main(void){
    int highest{0};
    int highestIndex{};
    std::vector <int> nums{};
    std::vector <int> count{};
    for(int num; std::cin >> num;){
        nums.push_back(num);
    }
    //Creating a vector the same size as nums of which every element holds value zero as count initially.
    for (int i = 0; i < nums.size(); i++){
        count.push_back(0);
    }
    //Checking if i matches with others and then if yes, count++
    for (int i = 0; i < nums.size(); i++){
        for (int k = 0; k < nums.size(); k++){
            if (nums[i] == nums[k]) count[i]++;
        }
    }
    
    for (int x : count){
        if (x > highest) highest = x;
    }
    for (int i = 0; i < count.size(); i++){
        if (count[i] == highest) highestIndex = i;
    }
    std::cout << "Mode: " << nums[highestIndex] << '\n';

    return 0;
}