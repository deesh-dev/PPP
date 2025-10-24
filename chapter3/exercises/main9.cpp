#include <iostream>
#include <cmath>

int main(void){
    int current_square{1};
    int sum{};
    bool printedThousand {false};
    bool printedMillion {false};
    bool printedBillion {false};
    bool reachedBillion {false};
    bool reachedThousand {false};
    bool reachedMillion {false};

    while (true){
        sum += pow(2, current_square);
        current_square++;

        if (sum >= 1000) reachedThousand = true;
        if (reachedThousand && !printedThousand) {
            std::cout << current_square << " squares are required to give the inventor atleast 1,000 grains of rice.\n";
            printedThousand = true;
        }

        else if (sum >= 1000000) reachedMillion = true;
        if (reachedMillion && !printedMillion) {
            std::cout << current_square << " squares are required to give the inventor atleast 1,000,000 grains of rice.\n";
            printedMillion = true;
        }

        else if (sum >= 1000000000) reachedBillion = true;
        if (reachedBillion && !printedBillion) {
            std::cout << current_square << " squares are required to give the inventor atleast 1,000,000,000 grains of rice.\n";
            printedBillion = true;
            break;
        }
        }
    return 0;
}
