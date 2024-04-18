#include <iostream>

int main () {
    int height = 0;
    while (height <= 0) {
        std::cout << "Input the height: ";
        std::cin >> height;
    }
    std::cout << "\n";
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "*" << " ";
    }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < height; ++i) {
        for (int j = height - 1; j > i; --j) {
            std::cout << "  ";
        }
        for (int n = 0; n <= i; ++n) {
            std::cout << "*" << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (int i = 0; i < height; ++i) {
        for (int j = height - 1; j > i; --j) {
            std::cout << " ";
        }
        for (int n = 0; n <= i; ++n) {
            std::cout << "*" << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

