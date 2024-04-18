#include <iostream>

void sortArr (int arr[], int arr_len) {
    int tmp = 0;
    for (int i = 0; i < arr_len - 1; ++i) {
        for (int j = 0; j < arr_len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Sorted array: " << std::endl;
    for (int i = 0; i < arr_len; ++i) {
        std::cout << arr[i] << std::endl;
    }
}

int main () {
    int arr_length = 0;
    int num = 0;
    std::cout << "Input the length of the array: ";
    std::cin >> arr_length;
    const int arr_length2 = arr_length;
    int arr[arr_length2] {0};
    for (int i = 0; i < arr_length; ++i) {
        std::cout << "Input number " << (i + 1) << ": ";
        std::cin >> num;
        arr[i] = num;
    }
    sortArr(arr, arr_length);
    return 0;
}

