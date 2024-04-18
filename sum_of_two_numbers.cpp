#include <iostream>

void FindNumbers(unsigned long long arr[], int arr_length, unsigned long long sum_of_numbers);

int main () {
    int arr_length = 0;
    unsigned long long num = 0;
    unsigned long long sum_of_numbers = 0;
    std::cout << "Input the sum of two numbers: ";
    std::cin >> sum_of_numbers;
    do {
        std::cout << "Input the length of the array: ";
        std::cin >> arr_length;
    } while (arr_length <= 0);
    const int arr_length2 = arr_length;
    unsigned long long arr[arr_length2] {0};
    for (int i = 0; i < arr_length; ++i) {
        std::cout << "Input number " << (i + 1) << ": ";
        std::cin >> num;
        arr[i] = num;
    }
    FindNumbers(arr, arr_length, sum_of_numbers);
    return 0;
}

void FindNumbers (unsigned long long arr[], int arr_length, unsigned long long sum_of_numbers) {
    for (int i = 0; i < arr_length; ++i) {
        for (int j = i + 1; j < arr_length; ++j) {
            if (arr[i] + arr[j] == sum_of_numbers) {
                std::cout << "\n" << arr[i] << " and " << arr[j] << "\n";
            }
        }
    }
}

