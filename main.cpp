#include<iostream>

int main() {
    double number;

    std::cout << "Enter the number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "is a positive number." << std::endl;
    }
    else if (number < 0) {
        std::cout << "is a negative number." << std::endl;
    }
    else {
        std::cout << "this number is zero." << std::endl;
    }
	return 0;
}