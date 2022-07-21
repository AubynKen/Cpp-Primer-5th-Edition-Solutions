#include <iostream>

int main() {
    int sum = 0;
    int current = 50;

    while (current <= 100) {
        sum += current;
        current++;
    }

    std::cout << "The sum from 50 to 100 is: " << sum << std::endl;

    return 0;
}