#include <iostream>
using namespace std;
const double PI = 3.1415926;
int main()
{
    double r, h;
    cout << "°ë¾¶: ";
    cin >> r;
    cout << "¸ß: ";
    cin >> h;
    double volume = 1.0 / 3.0 * PI * r* r * h;
    cout << "Ô²×¶Ìå»ý: " << volume << endl;
    return 0;
}