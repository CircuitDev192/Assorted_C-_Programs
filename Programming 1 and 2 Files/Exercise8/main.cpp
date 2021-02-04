//Problem 8:  A snail is at the bottom of a well and wants to climb to the top. The snail can climb X feet
//while the sun is up, but slides down Y feet at night while sleeping. The snail has a fatigue factor of F%,
//which means that on each successive day the snail climbs F% feet less than it did the previous day. The
//distance lost to fatigue is always F% of the first day's climbing distance. Given the height of the well,
//X, Y, and F, on what day does the snail leave the well? An alternative fate is the snail will not be able to
//climb out of the well and slides back to the bottom. In that case you will need to determine the day
//when the snail returns to the bottom of the well. Consider the example below.
//Height of well = 6; X (distance climbed the first day) = 3; Y (distance slipped each night) = 1; F
//(fatigue percent) = 10
//Day       Initial Height      Distance Climbed        Height After Climbing       Height After Sliding
//1         0'                  3'                      3'                          2'
//2         2'                  2.7'                    4.7'                        3.7'
//3         3.7'                2.4'                    6.1'                        -
//
//Example 1
//The snail’s height on the third day (6.1 feet) exceeds the height of the well (6 feet) and this indicates it
//has climbed out of the well.
//Another example demonstrates the snail failing back to the bottom.
//Height of well = 1; X (distance climbed the first day) = 1; Y (distance slipped each night) = 1; F
//(fatigue percent) = 1.
//Day   Initial Height      Distance Climbed    Height After Climbing       Height After Sliding
//1     0'                  1'                  1'                          0'
//2     0'                  0.99'               0.99'                       -0.01'
//
//Example 2
//The snail’s height on the second day (-0.01 feet) is negative and this indicates it has slid back to the
//bottom of the well.
// •A day consists of a period of sunlight followed by a period of darkness.
//
// •The snail escapes the well when its height exceeds the height of the well.
//
// •The snail hits the bottom of the well again when its height becomes negative (< 0).
//
// •Input will consist of four integer numbers separated by a single space. Each number will be
//greater than 0 and less than 101. The first number will be the height of the well. The second
//number will be how far the snail climbs on the first day. (The snail will never climb a negative
//distance.) The third number will be how far the snail slips each night. The fourth number will be
//“fatigue factor”.
//
// •All the numbers input will be considered to be in feet.
//
// •The fatigue factor is used to determine how much the snail’s climbing ability is reduced. The
//reduction amount is the same for each day and is based on the climbing distance of the first day.
//In the example 1 above, the fatigue factor is 10. This means the snail will climb .3 feet less each
//day. This is calculated as the first day climbing distance (3 feet) times 10 percent.
//
// •If the fatigue factor drops the snail's climbing distance below zero, the snail does not climb at
//all that day.
//
// •The snail always slides the same amount at night regardless of how far it has climbed during the
//day.
//
// •The snail never climbs a negative distance. If the fatigue factor drops the snail's climbing
//distance below zero, the snail does not climb at all that day.
//
// •The snail leaves the well when the height it has climbed exceeds the height of the well. Your
//solution should print “Success on day X” where X represents the numerical count of the days.
//
// •The snail hits the bottom of the well again when its height becomes negative (< 0). Your
//solution should print “Failure on day X” where X represents the numerical count of t

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
    double heightOfWell;
    double heightClimbedDay;
    double heightSlippedNight;
    double percentFatigue;

    cout << "Enter the height of the well: " << endl;
    cin >> heightOfWell;
    cout << "Enter the height climbed on the first day: " << endl;
    cin >> heightClimbedDay;
    cout << "Enter the height slipped on the first night: " << endl;
    cin >> heightSlippedNight;
    cout << "Enter the fatigue percentage(0.00-1.00, 0.50 is 50% for example): " << endl;
    cin >> percentFatigue;

    if(percentFatigue<0 || percentFatigue >1)
    {
        cout << "Invalid percent fatigue..." << endl;
        return 0;
    }
    double totalHeightClimbed = 0;
    int dayCounter = 1;
    double temp = heightClimbedDay;
    while(totalHeightClimbed<=heightOfWell && totalHeightClimbed>=0)
    {

        if(dayCounter!=1)
        {
            temp -= temp * percentFatigue;
        }
        totalHeightClimbed += temp - heightSlippedNight;
        cout << "On day " << dayCounter << " the snail climbed " << temp
             << " feet, and slipped " << heightSlippedNight << " feet reaching a height of "
             << totalHeightClimbed << " feet." << endl;
        dayCounter++;
    }
    if(totalHeightClimbed>heightOfWell)
    {
        cout << "Success on day " << dayCounter-1 << endl;
    } else {
        cout << "Failure on day " << dayCounter-1 << endl;
    }





    return 0;
}

























