#include <iostream>
using namespace std;
int main()
{
	double a, x, y;
	cin >> a;
	if (a < 0) {
		cout << "wu" << endl;
	}
	x = a;
	do
	{
		y = 0.5 * (x + a / x);
		if (fabs(y - x) < 1e-5)
		{
			break;
		}
		x = y;

	} while (true);
	cout << y << endl;
	return 0;
}