
//Write a C++ program that takes a positive integer N as input and determines whether it is a prime number.A prime number is a number greater than 1 that has exactly two factors:
#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }

    int i;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Not Prime";
            break;
        }
    }

    if (i == n) {
        cout << "Prime";
    }

    return 0;
}

