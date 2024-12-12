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

    //第一问
    int x = gcd(m, n);
    cout << m << "," << n << "最大公约数" << x << endl;

    // 第二问
    int gcdValue, lcmValue;
    gcdAndLcm(m, n, gcdValue, lcmValue);
    cout << m << "," << n << "最小公倍数" << lcmValue << endl;

    return 0;
}