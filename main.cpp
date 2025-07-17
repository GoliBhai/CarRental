#include "Car.h"
#include "RentalService.h"
#include "utils.h"
#include <iostream>

int main() {
    RentalService rentalService;
    int choice;

    do {
        clearScreen();
        std::cout << "===== Car Rental System =====\n";
        std::cout << "1. Add Car\n";
        std::cout << "2. View All Cars\n";
        std::cout << "3. Rent a Car\n";
        std::cout << "4. Return a Car\n";
        std::cout << "0. Exit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        switch (choice) {
            case 1: rentalService.addCar(); break;
            case 2: rentalService.displayCars(); break;
            case 3: rentalService.rentCar(); break;
            case 4: rentalService.returnCar(); break;
            case 0: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid option!\n"; pause(); break;
        }
    } while (choice != 0);

    return 0;
}