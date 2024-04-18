#include<iostream>

int main () {
    float num1;
    float num2;
    std::cout << "Input first number: ";
    std::cin >> num1;
    std::cout << "Input second number: ";
    std::cin >> num2;
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
    return 0;
}

