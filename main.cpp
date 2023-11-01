#include<iostream>

int main() {
    int number;

    std::cout << "Enter a six-digit number: ";
    std::cin >> number;

    if (number < 100000 || number >= 1000000) {
        std::cout << "Error! Please enter a six-digit number." << std::endl;
    }
    else {
        int first_three_digits = number / 1000; 
        int last_three_digits = number % 1000;  

        int sum_first_three_digits = (first_three_digits / 100) + ((first_three_digits / 10) % 10) + (first_three_digits % 10);
        int sum_last_three_digits = (last_three_digits / 100) + ((last_three_digits / 10) % 10) + (last_three_digits % 10);

        if (sum_first_three_digits == sum_last_three_digits) {
            std::cout << "This is a lucky number!" << std::endl;
        }
        else {
            std::cout << "This is not a lucky number." << std::endl;
        }
    }
	return 0;
}