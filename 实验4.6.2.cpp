#include <iostream>
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    std::cout << "请输入动态数组的元素个数: ";
    std::cin >> size;

    int* dynamicArray = new int[size];

    std::cout << "请输入动态数组的元素: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i];
    }

    // 输出原始数组
    std::cout << "原始数组: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // 排序数组
    sortArray(dynamicArray, size);

    // 输出排序后的数组
    std::cout << "排序后的数组: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // 释放数组内存
    delete[] dynamicArray;

    return 0;
}