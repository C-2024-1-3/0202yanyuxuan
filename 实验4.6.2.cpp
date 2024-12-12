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
    std::cout << "�����붯̬�����Ԫ�ظ���: ";
    std::cin >> size;

    int* dynamicArray = new int[size];

    std::cout << "�����붯̬�����Ԫ��: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i];
    }

    // ���ԭʼ����
    std::cout << "ԭʼ����: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // ��������
    sortArray(dynamicArray, size);

    // �������������
    std::cout << "����������: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // �ͷ������ڴ�
    delete[] dynamicArray;

    return 0;
}