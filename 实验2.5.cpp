#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while ((x = cin.get()) != '\n') {
		if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		{
			a++;
		}
		else if (x == ' ')
		{
			b++;
		}
		else if (x >= '0' || x <= '9')
		{
			c++;
		}
		else {
			d++;
		}
	}
		cout << "yingwen" << a << endl;
		cout << "kongge" << b<<endl;
		cout <<"shuzi" <<c << endl;
		cout <<"qita" << d << endl;
		return 0;
}