#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
    for (double cel = 40.0, fah = 120.0; cel >= 31.0; cel -= 1.0, fah -= 10.0) {
        double fahrenheit = celsius_to_fah(cel);
        double celsius = fahrenheit_to_cels(fah);
        cout << fixed << setprecision(1) << cel << "\t" << fahrenheit
            << "\t|\t" << fah << "\t" << celsius << endl;
    }
    return 0;
}