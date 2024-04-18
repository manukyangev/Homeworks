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
    int top = 0;
    int left = 0;
    int bottom = rows - 1;
    int right = cols - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            std::cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; ++i) {
            std::cout << arr[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; --i) {
            std::cout << arr[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; --i) {
            std::cout << arr[i][left] << " ";
        }
        left++;
    }
    return 0;
}

