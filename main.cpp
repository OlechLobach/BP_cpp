#include<iostream>

int main() {

        double number1, number2;

        std::cout << "Enter the first number: ";
        std::cin >> number1;

        std::cout << "Eter the second number: ";
        std::cin >> number2;

        if (number1 == number2) {
            std::cout << "these numbers are equal." << std::endl;
        }
        else {
            std::cout << "these numbers are not equal. in ascendingorder: ";

            if (number1 < number2) {
                std::cout << number1 << ", " << number2 << std::endl;
            }
            else {
                std::cout << number2 << ", " << number1 << std::endl;
            }
        }

        return 0;
    }

