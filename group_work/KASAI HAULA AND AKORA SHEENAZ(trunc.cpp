#include <iostream>
using namespace std;

int trunc(double number) {
    return (int)number;
};

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Truncated value: " << trunc(number) << endl;
    return 0;
}