#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0; 
    }

    for (int i = 0; s[i] != '\0'; ++i) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26];
    cin >> s;

    count(s, counts);

    cout << "字母出现的次数：" << endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << char(i + 'a') << ": " << counts[i] << endl;
        }
    }

    return 0;
}
