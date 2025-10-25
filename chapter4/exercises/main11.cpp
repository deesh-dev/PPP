#include <iostream>
#include <vector>

int main(void){
    std::vector <int> fibbonacciSeries(100); // Made the size 100, because I couldn't think of anything else to loop
    fibbonacciSeries[0] = fibbonacciSeries[1] = 1;
    for (int i = 2; i < fibbonacciSeries.size(); i++){
        fibbonacciSeries[i] = fibbonacciSeries[i - 1] + fibbonacciSeries[i - 2];
        if (fibbonacciSeries[i] < 0){ // When an int overflows it goes negative, so we can use the element before that to get the greatest
            std::cout << "Greatest fibbonacci series number than an int can hold is: " << fibbonacciSeries[i - 1] << '\n';
            return 0;
        }
    }
}