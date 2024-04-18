#include <iostream>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main () {
    int num_of_elements = 0;
    int num = 0;
    const int max_arr_size = 100;
    std::cout << "The maximum number of elements is 100" << std::endl;
    while (num_of_elements < 2 || num_of_elements > max_arr_size) {
        std::cout << "Input the number of elements: ";
        std::cin >> num_of_elements;
    }
    long long arr[max_arr_size] {0};
    for (int i = 0; i < num_of_elements; ++i) {
        std::cout << "Input number " << i + 1 << ":";
        std::cin >> num;
        arr[i] = num;
    }
    long long max = MAX(arr[0], arr[1]);
    long long min = MIN(arr[0], arr[1]);
    if (num_of_elements > 2) {
        for (int j = 2; j < num_of_elements; ++j) {
            max = MAX(max, arr[j]);
            min = MIN(min, arr[j]);
        }
    }
    std::cout << "\n";
    std::cout << "The minimum number is " << min << std::endl;
    std::cout << "The maximum number is " << max << std::endl;
    return 0;
}

