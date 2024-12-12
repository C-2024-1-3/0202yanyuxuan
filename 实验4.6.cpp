#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            counts[tolower(s[i]) - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26] = { 0 };
    cin >> s;

    count(s, counts);

    cout << "字符串中每个字母出现的次数为：" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            char letter = 'a' + i;
            cout << letter << " : " << counts[i] << endl;
        }
    }

    return 0;
}