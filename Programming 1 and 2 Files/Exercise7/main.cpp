/*
 * Easter can occur as early as March 22nd and as late as April 25th. The problem is it moves
    around from year to year. The exact day of the year can be calculated based on a formula by the
    German mathematician Friedrich Gauss. Create an application to determine the date of Easter for any
    year between 1583 and 2299.
    Detail Requirements
    Use the following calculations:
    a = year mod 19
    b = year mod 4
    c = year mod 7
    d = (19a + M) mod 30
    e = (2b + 4c + 6d + N) mod 7

 Figure 1
    The values for M and N are provided in the following table.
    Year        M       N
    1583-1699   22      2
    1700-1799   23      3
    1800-1899   23      4
    1900-2099   24      5
    2100-2199   24      6
    2200-2299   25      0

 Figure 2
    If d + e is less than 10 then Easter is on the d + e + 22 of March. Otherwise Easter is on the d + e – 9 of
    April. You must also incorporate the following exceptions:
    Easter can never be on April 26. If the calculated date is April 26, shift it to April 19.
    If the calculated date is April 25, with d = 28, e = 6, and a > 10 then Easter is on April 18.
    Print the day of the month using the proper ordinal suffix (st, nd, rd, th) after day of the month.

    Prompt the user to enter the year for which the date of Easter is to be calculated. Read the year. Use this
    input and the formula above to calculate the date for Easter. Below is sample input and output. Match
    the sample output exactly for the given sample input.
    Input Year          Output
    2011                In 2011 Easter is on April 24th
    1886                In 1886 Easter is on April 25th
    2222                In 2222 Easter is on March 31st
    1820                In 1820 Easter is on April 2nd
    1988                In 1988 Easter is on April 3rd
 */


#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void init(int&, int&, int&, int&, int&, int&, int&, int&);

int main()
{
    int a, b, c, d, e, m, n;
    int year;
    cout << "Enter a year between 1583 and 2299: " << endl;
    cin >> year;

    try {
        init(year, a, b, c, d, e, m, n);
    } catch (int err) {
        cout << "Invalid Year. Exiting with error code: " << err << "...";
        return 0;
    }

    int easterDay;
    string easterMonth;
    if((d+e)<10)
    {
        easterDay = d+e+22;
        easterMonth = "March";
    } else {
        easterDay = d+e-9;
        easterMonth = "April";
        if(easterDay==26)
        {
            easterDay = 19;
        } else if(easterDay==25 && d==28 && e==6 && a>10)
        {
            easterDay = 18;
        }
    }

    string suffix;
    if(easterDay%10 == 1)
    {
        suffix = "st";
        if(easterDay==11)
        {
            suffix = "th";
        }
    } else if(easterDay%10==2){
        suffix = "nd";
        if(easterDay==12)
        {
            suffix = "th";
        }
    } else if(easterDay%10==3){
        suffix = "rd";
        if(easterDay==13)
        {
            suffix = "th";
        }
    } else {
        suffix = "th";
    }

    cout << "In " << year << " Easter is on " << easterMonth << " " << easterDay << suffix << endl;

    return 0;
}


void init(int &year, int &a, int &b, int &c, int &d, int &e, int &m, int &n)
{

    if(year>=1583 && year<=1699)
    {
        m = 22;
        n = 2;
    } else if(year>=1700 && year<=1799)
    {
        m = 23;
        n = 3;
    } else if(year>=1800 && year<=1899)
    {
        m = 23;
        n = 4;
    } else if(year>=1900 && year<=2099)
    {
        m = 24;
        n = 5;
    } else if(year>=2100 && year<=2199)
    {
        m = 24;
        n = 6;
    } else if(year>=2200 && year<=2299)
    {
        m = 25;
        n = 0;
    } else {
        throw 1;
    }

    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (19*a + m) % 30;
    e = (2*b + 4*c + 6*d + n) % 7;
}



















