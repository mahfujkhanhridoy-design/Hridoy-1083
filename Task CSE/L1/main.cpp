//Write a C++ program that takes an integer N from the user and prints
//the sum of all numbers from 1 to N.

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   for(int i=0;i<=n;i++){
    sum=sum+i;

   }
   cout<<sum;
    return 0;
}
