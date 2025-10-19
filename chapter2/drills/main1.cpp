#include <iostream>

int main(void){
    std::cout << "Enter the sender's name: ";
    std::string sender_name;
    std::cin >> sender_name;

    std::cout << "Enter the name of the person you want to write to: ";
    std::string receipient_name{};
    std::cin >> receipient_name;

    std::cout << "Enter the name of another friend: ";
    std::string friend_name{};
    std::cin >> friend_name;

    std::cout << "Enter the age of the receipient: ";
    int age{};
    std::cin >> age;
    std::cout << "Hello, " << receipient_name << '\n';
    std::cout << "How are you?\n" << "I am fine.\nI miss you.\n";
    std::cout << "Have you seen " << friend_name << " lately?\n";
    if (age >= 110 || age <= 0) std::cout << "You're kidding.\n";
    else if (age < 12 && age > 0) std::cout << "Next year you will be " << age + 1 << '\n';
    else if (age == 17) std::cout << "Next year you will be able to vote.\n";
    else if (age > 70 && age < 110) std::cout << "Are you retired?\n";
    std::cout << "Yours sincerely\n\n\n" << sender_name << '\n';
    
}