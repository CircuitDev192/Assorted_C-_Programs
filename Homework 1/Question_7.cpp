#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void slopeOfLine(int x1, int y1, int x2, int y2)
{
    double x = 0.0;
    double y = 0.0;
    double M = 0.0;

    x = x2-x1;
    y = y2-y1;

    M = y/x;

    if (M==0)
    {
        cout << "The slope of the line is horizontal." << endl;
    } else  if (std::isinf(M))
    {
        cout << "The slope of the line is vertical." << endl;
    } else {
        cout << "The slope is: " << M << " i.e.(" << y << "\\" << x << ")" << endl;
    }

}

int main()
{
    slopeOfLine(2,4,2,5);
    slopeOfLine(2,4,3,4);
    slopeOfLine(2,4,3,5);
    slopeOfLine(2,4,6,9);

    return 0;
}