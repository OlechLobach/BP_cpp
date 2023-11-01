#include<iostream>

int main() {
    int number;

    std::cout << "Enter a four-digit number: ";
    std::cin >> number;

    if (number < 1000 || number >= 10000) {
        std::cout << "Error! Please enter a four-digit number." << std::endl;
    }
    else {
        int first_digit = number / 1000; 
        int second_digit = (number / 100) % 10; 
        int third_digit = (number / 10) % 10;  
        int fourth_digit = number % 10;  

        
        int new_number = (second_digit * 1000) + (first_digit * 100) + (fourth_digit * 10) + third_digit;

        std::cout << "The new number after the swap: " << new_number << std::endl;
    }

	return 0;
}