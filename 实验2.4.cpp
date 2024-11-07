#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char x;
    cin >> num1 >> x >> num2;
    switch (x)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "除数不为0" << endl;
        }
        else
        {
            cout << num1 / num2 << endl;
        }
        break;
    case '%':
        if (static_cast<int>(num2) == 0)
        {
            cout << "除数不为0" << endl;
        }
        else
        {
            cout << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        break;
    default:
        cout << "cuowu" << endl;
    }
    return 0;
}