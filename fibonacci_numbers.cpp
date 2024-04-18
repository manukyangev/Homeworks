#include <iostream>

int main () {
    long long fib_num1 = 1;
    long long fib_num2 = 1;
    long long fib_num = 0;
    int num = 0;
    const int max_number = 100;
    std::cout << "The maximum number is 100" << std::endl;
    while (num <= 0 || num > max_number) {
        std::cout << "Input a number: ";
        std::cin >> num;
    }
    long long arr[max_number] {1, 1};
    for (int i = 2; i < num; ++i) {
        fib_num = fib_num1;
        fib_num1 = fib_num2;
        fib_num2 = fib_num1 + fib_num;
        arr[i] = fib_num2;
    }
    std::cout << "The Fibonacci number at index " << num << " is " << fib_num2 << std::endl;
    std::cout << "\n";
    for (int j = 0; j < num; ++j) {
        for (int n = 0; n <= j; ++n) {
            std::cout << arr[n] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

