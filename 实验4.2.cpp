#include <iostream>
using namespace std;
void x(double m[], int mSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < mSize - 1; j++) {
            if (m[j] > m[j + 1]) {
                double temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double numbers[10];
    cout << "10个双精度数字：";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    x(numbers, 10);

    cout << "排序后";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}