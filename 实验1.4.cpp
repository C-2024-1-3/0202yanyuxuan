#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534; //0xfffe
    cout << "output in unsigned int type: " << testUnint << endl;
    cout << "output in octal unsigned int type: " << oct << testUnint << endl;
    double realNumber = 3.14;
    int integerNumber = static_cast<int>(realNumber);
    cout << "Converting real number " << realNumber << " to integer: " << integerNumber << endl;
    return 0;
}
