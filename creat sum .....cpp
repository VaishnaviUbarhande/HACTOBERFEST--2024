#include <iostream>  // Include the input-output stream library

int main() {
    int num1, num2, sum;

    // Ask the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Ask the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}
