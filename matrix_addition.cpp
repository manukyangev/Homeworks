#include <iostream>

int main () {
    int rows = 0;
    int cols = 0;
    int num = 0;
    do {
        if (rows <= 0) {
            std::cout << "Input the rows of the matrix: ";
            std::cin >> rows;
        }
        else if (cols <= 0) {
            std::cout << "Input the columns of the matrix: ";
            std::cin >> cols;
        }
    } while (rows <= 0 || cols <= 0);
    const int rows2 = rows;
    const int cols2 = cols;
    int arr[rows2][cols2] {};
    int arr2[rows2][cols2] {};
    for (int k = 0; k < 2; ++k) {
        std::cout << "Matrix " << (k + 1) << ": " << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Input number " << (i + 1) << "." << (j + 1) << ": ";
                std::cin >> num;
                if (k == 0) {
                    arr[i][j] = num;
                } else {
                    arr2[i][j] = num;
                }
            }
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << (arr[i][j] + arr2[i][j]) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

