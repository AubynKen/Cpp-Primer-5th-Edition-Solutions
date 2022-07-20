#include <iostream>

int main() {
    std::cout << "Please enter two integers : " << std::endl;

    int firstNumber, secondNumber;
    std::cin >> firstNumber;
    std::cin >> secondNumber;

    std::cout << "The product of ";
    std::cout << firstNumber;
    std::cout << " and ";
    std::cout << secondNumber;
    std::cout << " is " << firstNumber * secondNumber << "." << std::endl;

    return 0;
}