#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	double x;
	cin >> x;
	double y;
	y= (x - 32) * 5.0 / 9.0;
	cout <<fixed<< setprecision(2) << y << endl;
	return 0;
}