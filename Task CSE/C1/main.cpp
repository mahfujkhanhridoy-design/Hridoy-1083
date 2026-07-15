/*1. The Exam Grading System
Scenario: A coaching center needs to automate its report cards based on a student's total score.

Task: Write a program that takes an integer input representing a student's score (0 to 100).

Conditions to implement:

If the score is 90 or above, print "Grade: A+"

If the score is between 80 and 89, print "Grade: A"

If the score is between 70 and 79, print "Grade: B"

If the score is below 70, print "Grade: F"

If the input is less than 0 or greater than 100, print "Invalid Score"
#include <iostream>

using namespace std;*/

int main()
{
        int marks;
        cout<<"Enter the student marks:";
        cin>>marks;
        if(marks<=100&&marks>=90){
            cout<<"A+";;

        }
    else if (marks>=80&&marks<=89){
        cout<<"A";
    }

        else if (marks>=70&&marks<=79){
        cout<<"B";
    }
        else {
        cout<<"F";
    }

    return 0;
}
