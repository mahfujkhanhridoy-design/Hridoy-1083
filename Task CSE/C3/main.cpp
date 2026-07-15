/*3. Academic Calendar Leap Year Checker
Scenario: An academic board needs to check if February has 29 days in a given year to schedule terminal exams.

Task: Input a 4-digit integer representing a year (e.g., 2024, 2026) and determine if it is a leap year.

Conditions to implement:

A year is a leap year if it is perfectly divisible by 4.

Exception: If it is divisible by 100, it is not a leap year, unless it is also divisible by 400.

Print "Leap Year" or "Not a Leap Year" based on these rules.

(Hint: Use the modulo operator % and logical operators like && and ||)*/

#include <iostream>

using namespace std;

int main()
{    int Leap_year;
    cout<<"Enter A Year:";
    cin>>Leap_year;

    if(Leap_year%4==0){
        cout<<"LEAP YEAR";

    }
    else{
        cout<<"NOT LEAP YEAR";

    }
    return 0;
}
