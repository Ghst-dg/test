#include <iostream>

using namespace std;

void generateSeries(int x) {
    int currentNumber = 1;
    cout << "Output: ";
    for (int i = 1; i <= x; i++) {
        if (i % 2 != 0) {
            cout << currentNumber << " ";
        }
        currentNumber += 2;
    }
    cout << endl;
}

int main() {
    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    generateSeries(x);

    return 0;
}
