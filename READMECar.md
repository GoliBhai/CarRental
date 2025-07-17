# Car Rental System (C++)

This is a basic console-based Car Rental System built using C++. It simulates a car rental service where users can add cars, view available cars, rent them out, and return them. The system is designed using object-oriented principles and offers a clean CLI interface for interaction.

## Features

- Add new cars to the system with brand and model
- View all registered cars along with their rental status
- Rent a car by providing its ID
- Return a previously rented car
- Clear and responsive terminal UI for a better user experience


## Technologies & Skills Used

- C++ (Object-Oriented Programming)
- Header and implementation file separation
- Vectors and basic STL usage
- Console-based UI and user input handling
- Cross-platform terminal commands (`clear`, `cls`)

## How to Run

### 1. Compile the Code

```bash
g++ main.cpp Car.cpp RentalService.cpp -o CarRental

2. Run the Program

./CarRental

Sample Interaction

===== Car Rental System =====
1. Add Car
2. View All Cars
3. Rent a Car
4. Return a Car
0. Exit
Choose: 1

Enter Car ID: C101
Enter Brand: Toyota
Enter Model: Corolla
Car added successfully!


