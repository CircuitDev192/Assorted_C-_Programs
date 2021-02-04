/*
 * Program can make classes that store temperature in Celsius, and can be set using either
 * Fahrenheit or Celsius. The class can also return the temp using either scale as well.
 */

#include <iostream>
#include "temperature.h"

using std::cout;
using std::endl;

int main() {

    temperature temp1(-40, true);
    cout << temp1.returnTempCelsius() << endl;
    cout << temp1.returnTempFahrenheit() << endl;

    cout << endl;

    temperature temp2(212, false);
    cout << temp2.returnTempCelsius() << endl;
    cout << temp2.returnTempFahrenheit() << endl;

    cout << endl;

    temp1.setTempCelsius(0);
    temp2.setTempFahrenheit(72);

    cout << temp1.returnTempCelsius() << endl;
    cout << temp1.returnTempFahrenheit() << endl;

    cout << endl;

    cout << temp2.returnTempCelsius() << endl;
    cout << temp2.returnTempFahrenheit() << endl;

    return 0;
}