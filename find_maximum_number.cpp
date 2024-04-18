include <iostream>

int main () {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    std::cout << "Input num1: ";
    std::cin >> num1;
    std::cout << "Input num2: ";
    std::cin >> num2;
    if (num2 > num1) {
        num1 = num2;
    }
    std::cout << "Input num3: ";
    std::cin >> num3;
    if (num3 > num1) {
        num1 = num3;
    }
    std::cout << "Input num4: ";
    std::cin >> num4;
    if (num4 > num1) {
        num1 = num4;
    }
    std::cout << "Input num5: ";
    std::cin >> num5;
    if (num5 > num1) {
        num1 = num5;
    }
    std::cout << "The maximum number is " << num1 << std::endl;
    return 0;
}

