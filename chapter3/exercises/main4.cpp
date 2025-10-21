#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    double totalDistance{};
    std::vector <double> distanceVector{};
    for (double distance; std::cin >> distance;){
        distanceVector.push_back(distance);
    }
    std::sort(distanceVector.begin(), distanceVector.end());
    
    for (double distance : distanceVector) totalDistance += distance;
    double meanDistance {totalDistance / distanceVector.size()};

    std::cout << "Total distance = " << totalDistance << '\n';
    std::cout << "Mean distance between two cities = " << meanDistance << '\n';
    std::cout << "Smallest distance between two cities = " << distanceVector[0] << '\n';
    std::cout << "Largest distance between two cities = " << distanceVector[distanceVector.size() -1] << '\n';

    return 0;
}