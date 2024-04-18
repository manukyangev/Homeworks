#include <iostream>

int main () {
    int num = 0;
    std::cout << "Input a number: ";
    std::cin >> num;
    int reversed_number = 0;
    while (num) {
        reversed_number = reversed_number * 10 + num % 10;
        num /= 10;
    }
    std::cout << "Reversed number is " << reversed_number << std::endl;
}

