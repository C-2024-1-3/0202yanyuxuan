#include <iostream>
using namespace std;
const double PI = 3.1415926;
int main()
{
    double r, h;
    cout << "�뾶: ";
    cin >> r;
    cout << "��: ";
    cin >> h;
    double volume = 1.0 / 3.0 * PI * r* r * h;
    cout << "Բ׶���: " << volume << endl;
    return 0;
}