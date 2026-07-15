#include <iostream>
using namespace std;

int isEven(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    cin >> n;

    if (isEven(n) == 1)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
