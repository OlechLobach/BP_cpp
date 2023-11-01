#include<iostream>

int main() {
        double number1, number2;

        std::cout << "Enter the first number: ";
        std::cin >> number1;

        std::cout << "ÂEnter the second number: ";
        std::cin >> number2;

        if (number1 < number2) {
            std::cout << "smaller number: " << number1 << std::endl;
        }
        else {
            std::cout << "smaller number: " << number2 << std::endl;
        }

        return 0;
    }

