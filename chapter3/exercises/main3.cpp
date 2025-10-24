#include <iostream>
#include <vector>
#include <algorithm>


int main(void){
    std::vector <int> nums{};

    for (int num{}; std::cin >> num;){
        nums.push_back(num);
    }
    std::sort(nums.begin(), nums.end());

    if (nums.size() % 2 != 0) std::cout << "Median: " << nums[(nums.size() - 1) / 2] << '\n';
    else{
        int firstMiddleElement = nums[(nums.size() / 2) - 1];
        int secondMiddleElement = nums[nums.size() / 2];
        std::cout << "Median: " << (secondMiddleElement + firstMiddleElement) / 2.0 << '\n';
    }
    return 0;
}