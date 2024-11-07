#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (x <= 'a' && x >= 'z') {
		x = x -32;
		cout << x << endl;
	}
	else {
		int y;
		y = int(x + 1);
		cout << y<< endl;
	}
	return 0;
}