#include <iostream>

int main () {
    int num = 0;
    do {
        std::cout << "Input a number: ";
        std::cin >> num;
    }
    while (num < 0);
    unsigned long long factorial = 1;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    std::cout << "Factorial of " << num << " is " << factorial << std::endl;
    return 0;
}

