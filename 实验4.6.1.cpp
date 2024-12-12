#include <iostream>
#include <cstring>
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; ++i) {
        if (strncmp(s1, s2 + i, len1) == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];
    std::cout << "请输入字符串s1: ";
    std::cin >> s1;
    std::cout << "请输入字符串s2: ";
    std::cin >> s2;

    int result = indexof(s1, s2);
    if (result != -1) {
        std::cout << s1 << " 是 " << s2 << " 的子串，第一次匹配下标为: " << result << std::endl;
    }
    else {
        std::cout << s1 << " 不是 " << s2 << " 的子串" << std::endl;
    }

    return 0;
}