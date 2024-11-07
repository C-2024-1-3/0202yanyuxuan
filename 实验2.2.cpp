#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	cin >> x;
	if (0 < x < 1) {
		y = 3 - 2x;
	}
	else if (1 <= x <= 5) {
		y = 1 /2x + 1;
	}
	else {
		y = x ^ 2;
	}
	cout >> y >> endl;
	return 0;
}
