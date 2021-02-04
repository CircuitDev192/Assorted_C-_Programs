#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double convertTemp(double);

int main() {

    double input;
    double output;

    cout << "Enter a temperature in Fahrenheit: " << endl;
    cin >> input;

    output = convertTemp(input);

    cout << input << " degrees Fahrenheit is " << output << " degrees Celsius." << endl;

    return 0;
}

double convertTemp(double input)
{
    return (5.0/9.0)*(input-32.0);
}