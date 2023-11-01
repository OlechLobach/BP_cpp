#include<iostream>

int main() {

        double distance_AB, distance_BC, cargo_weight;
        const double fuel_capacity = 300.0;

        std::cout << "Enter the distance between point A and point B (km): ";
        std::cin >> distance_AB;

        std::cout << "Enter the distance between point B and point C (km): ";
        std::cin >> distance_BC;

        std::cout << "Enter the weight of the cargo (kg): ";
        std::cin >> cargo_weight;

        double fuel_needed = 0; 

        if (cargo_weight <= 500) {
            fuel_needed = distance_AB + distance_BC;
        }
        else if (cargo_weight <= 1000) {
            fuel_needed = 4 * (distance_AB + distance_BC);
        }
        else if (cargo_weight <= 1500) {
            fuel_needed = 7 * (distance_AB + distance_BC);
        }
        else if (cargo_weight <= 2000) {
            fuel_needed = 9 * (distance_AB + distance_BC);
        }

        double max_distance = fuel_capacity / fuel_needed;

        if (fuel_needed <= fuel_capacity) {
            std::cout << "Minimum fuel needed to cover the distances: " << fuel_needed << " liters." << std::endl;
            std::cout << "The airplane can cover a maximum distance of " << max_distance << " km with the given cargo and fuel capacity." << std::endl;
        }
        else {
            double max_distance_with_current_cargo = fuel_capacity * max_distance;
            std::cout << "It's impossible to cover one or both distances with the given amount of fuel." << std::endl;
            std::cout << "The airplane can cover a maximum distance of " << max_distance_with_current_cargo << " km with the current cargo and fuel capacity." << std::endl;
        }

        return 0;
    }
