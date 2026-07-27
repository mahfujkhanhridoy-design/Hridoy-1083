#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    vector<double> value(n), weight(n), ratio(n);

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++)
        cin >> value[i];

    cout << "Enter weights:\n";
    for (int i = 0; i < n; i++)
        cin >> weight[i];

    // Calculate ratio
    for (int i = 0; i < n; i++)
        ratio[i] = value[i] / weight[i];

    // Sort according to ratio
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(value[i], value[j]);
                swap(weight[i], weight[j]);
            }
        }
    }

    double capacity;
    cout << "Enter Capacity: ";
    cin >> capacity;

    double totalValue = 0;

    for (int i = 0; i < n; i++) {
        if (capacity >= weight[i]) {
            capacity -= weight[i];
            totalValue += value[i];
        }
        else {
            totalValue += ratio[i] * capacity;
            break;
        }
    }

    cout << "Maximum Value = " << totalValue << endl;

    return 0;
}
