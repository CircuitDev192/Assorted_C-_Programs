#ifndef TEMPCLASSEXERCISE_TEMPERATURE_H
#define TEMPCLASSEXERCISE_TEMPERATURE_H


class temperature {

public:
    void setTempFahrenheit(double temp);
    void setTempCelsius(double temp);
    double returnTempCelsius();
    double returnTempFahrenheit();

    //Specific Constructor
    temperature(double temp, bool celsius){
        tempCelsius = celsius ? temp : (temp-32)*(5.0/9.0);
    };

    //Default Constructor
    temperature(): temperature(-40, true){};


private:
    double tempCelsius;

};


#endif //TEMPCLASSEXERCISE_TEMPERATURE_H
