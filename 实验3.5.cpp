#include <iostream>
using namespace std;
int peaches(int day) {
    if (day == 10) {
        return 1; 
    }
    return (peaches(day + 1) + 1) * 2; 
}

int main() {
    cout  << peaches(1) << endl;
    return 0;
}
