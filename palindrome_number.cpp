#include <iostream>

int main () {
    int num = 0;
    std::cout << "Input a number: ";
    std::cin >> num;
    int initial_value = num;
    int reversed_num = 0;
    while (num) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }
    if (initial_value == reversed_num) {
        std::cout << initial_value << " is a palindrome number" << std::endl;
    } else {
        std::cout << initial_value << " is not a palindrome number" << std::endl;
    }
    return 0;
}

