#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
void gcdAndLcm(int m, int n, int& gcdx, int& lcmx) {
    gcdx = gcd(m, n);
    lcmx= m * n / gcdx;
}
int main() {
    int m, n;
    cin >> m >> n;

    //��һ��
    int x = gcd(m, n);
    cout << m << "," << n << "���Լ��" << x << endl;

    // �ڶ���
    int gcdValue, lcmValue;
    gcdAndLcm(m, n, gcdValue, lcmValue);
    cout << m << "," << n << "��С������" << lcmValue << endl;

    return 0;
}