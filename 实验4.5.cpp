#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int l1= strlen(s1);
    int l2 = strlen(s2);

    for (int i = 0; i <= l2 - l1; i++) {
        bool match = true;
        for (int j = 0; j < l1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) return i;
    }

    return -1;
}

int main() {
    char s1[100], s2[100];
    cin >> s1;
    cin >> s2;

    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << s1 << " 是 " << s2 << " 的子串，下标为：" << result << endl;
    }
    else {
        cout << s1 << " 不是 " << s2 << " 的子串。" << endl;
    }

    return 0;
}