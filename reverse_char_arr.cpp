#include <iostream>

void reverseArr(char arr[], int arr_length);

int main () {
    int arr_length = 0;
    char arr_character;
    do {
        std::cout << "Input the length of the array: ";
        std::cin >> arr_length;
    } while (arr_length <= 0);
    const int arr_length2 = arr_length;
    char arr[arr_length2];
    for (int i = 0; i < arr_length; ++i) {
        std::cout << "Input character " << (i + 1) << ": ";
        std::cin >> arr_character;
        arr[i] = arr_character;
    }
    std::cout << std::endl;
    reverseArr(arr, arr_length);
    return 0;
}

void reverseArr (char arr[], int arr_length) {
    char tmp;
    for (int i = 0; i < arr_length / 2; ++i) {
        tmp = arr[i];
        arr[i] = arr[arr_length - i - 1];
        arr[arr_length - i - 1] = tmp;
    }
    std::cout << "Reversed array: ";
    for (int i = 0; i < arr_length; ++i) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

