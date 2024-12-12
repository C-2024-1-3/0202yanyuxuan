#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int dis[10];
    int Count = 0;

    cout << "请输入10个数：";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        bool isNew = true;
        for (int j = 0; j < Count; j++) {
            if (numbers[i] == dis[j]) {
                isNew = false;
                break;
            }
        }
        if (isNew) {
            dis[Count] = numbers[i];
            Count++;
        }
    }

    cout << "不同的数为：";
    for (int i = 0; i < Count; i++) {
        cout << dis[i] << " ";
    }
    cout << endl;

    return 0;
}