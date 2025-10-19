#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    std::cout << "Enter three integer values: ";
    std::vector <int> nums;
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);

    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) std::cout << nums[i] << ' ' ;
    std::cout << '\n';
}