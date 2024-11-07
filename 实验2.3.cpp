#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout >>"zhouchang" >> a + b + c >> endl;
	if (a + b > c || a + c > b || b + c > a)
	{
		if (a == b || b == c || c == a) {
			cout << "dengyao" << endl;
		}
		else {
			cout << "bushidengyao" << endl;
		}
	}
	else {
		cout << "bushisanjiaoxing" << endl;
	}
	return 0;
}