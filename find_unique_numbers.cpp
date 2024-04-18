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
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Input number " << (i + 1) << "." << (j + 1) << ": ";
            std::cin >> num;
            arr[i][j] = num;
        }
    }
    bool isnotUnique;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            isnotUnique = false;
            for (int n = 0; n < rows; ++n) {
                for (int k = 0; k < cols; ++k) {
                    if (i != n || j != k) {
                        if (arr[i][j] == arr[n][k]) {
                            isnotUnique = true;
                        }
                    }
                }
            }
            if (!isnotUnique) {
                std::cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}

