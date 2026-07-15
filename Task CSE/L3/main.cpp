//Write a C++ program that takes an integer and counts how many digits it has.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        count++;
        n=n/10;
    }
    cout<<count;

    return 0;
}
