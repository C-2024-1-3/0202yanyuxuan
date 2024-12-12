#include <iostream>
using namespace std;

int main() {
    bool ms[100] = { false };

    for (int s = 1; s <= 100; s++) {
        for (int m = s; m <= 100; m += s) {
            ms[m - 1] = !ms[m - 1];
        }
    }

    cout << "¿ª×ÅµÄºÅÂë";
    for (int i = 0; i < 100; i++) {
        if (ms[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}