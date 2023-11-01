#include<iostream>

int main() {
    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "Number " << number << " even number." << std::endl;
    }
    else {
        std::cout << "Number " << number << " not an even number." << std::endl;
    }
    
    return 0;
}