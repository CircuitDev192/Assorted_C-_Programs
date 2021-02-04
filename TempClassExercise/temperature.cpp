#include "temperature.h"

void temperature::setTempFahrenheit(double temp) {
    tempCelsius = ((temp-32)*(5.0/9.0));
}

void temperature::setTempCelsius(double temp) {
    tempCelsius = temp;
}

double temperature::returnTempCelsius() {
    return tempCelsius;
}

double temperature::returnTempFahrenheit() {
    return ((tempCelsius/(5.0/9.0))+32);
}