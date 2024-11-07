#include <iostream>
using namespace std;
int main()
{
    int apples = 2;
    double totalCost = 0;
    int days = 0;
    while (apples <= 100)
    {
        totalCost += apples * 0.8;
        days++;
        apples *= 2;
    }
    double averageCost = totalCost / days;
    cout  << averageCost  << endl;
    return 0;
}
