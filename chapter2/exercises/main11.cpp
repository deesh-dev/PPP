#include <iostream>

int main(void){
    double total;
    int pennies, nickels, dimes, quarters, halfDollars, oneDollars;
    std::cout << "How many pennies do you have? ";
    std:: cin >> pennies;
    total += pennies * 1;
    
    std::cout << "How many nickels do you have? ";
    std::cin >> nickels;
    total += nickels * 5;

    std::cout << "How many dimes do you have? ";
    std::cin >> dimes;
    total += dimes * 10;

    std::cout << "How many quarters do you have? ";
    std::cin >> quarters;
    total += quarters * 25;

    std::cout << "How many half-dollars do you have? ";
    std::cin >> halfDollars;
    total += halfDollars * 50;

    std::cout << "How many one-dollars do you have? ";
    std::cin >> oneDollars;
    total += oneDollars * 100;

    if (pennies == 1) std::cout << "You have " << 1 << " penny\n";
    else std::cout << "You have " << pennies << " pennies\n";

    if (nickels == 1) std::cout << "You have " << 1 << " nickel\n";
    else std::cout << "You have " << nickels << " nickels\n";

    if (dimes == 1) std::cout << "You have " << 1 << " dime\n";
    else std::cout << "You have " << dimes << " dimes\n";

    if (quarters == 1) std::cout << "You have " << 1 << " quarter\n";
    else std::cout << "You have " << quarters << " quarters\n";

    if (halfDollars == 1) std::cout << "You have " << 1 << " half-dollar\n";
    else std::cout << "You have " << halfDollars << " half-dollars\n";

    if (oneDollars == 1) std::cout << "You have " << 1 << " one-dollar\n";
    else std::cout << "You have " << oneDollars << " one-dollars\n";

    std::cout << "The value of all your coins is " << total/100 << " dollars\n";
}