#include<iostream>

int main() {
    int max_number;

    std::cout << "Enter seven integers:" << std::endl;

    std::cin >> max_number;

    for (int i = 1; i < 7; ++i) {
        int number;
        std::cin >> number;

        if (number > max_number) {
            max_number = number;
        }
    }

    std::cout << "The maximum number among the inputs is: " << max_number << std::endl;
	return 0;
}