#include <iostream>
using namespace std;
//Name: AKORA SHEENAZ N
class MathOperations {

public:
    int floorValue(double x) {
        int n = (int)x;
        if (x < n) {
            return n - 1;
        }
        return n;
    }

    int ceilValue(double x) {
        int n = (int)x;
        if (x > n) {
            return n + 1;
        }
        return n;
    }

    int truncValue(double x) {
        return (int)x;
    }

    double sqrtValue(double x) {
        // Guard clause: Safe check for zero and negative numbers
        if (x == 0) return 0;
        if (x < 0) {
            cerr << "[Warning] Square root of negative number is complex! ";
            return 0; 
        }

        double guess = x;
        for (int i = 0; i < 20; i++) {
            guess = (guess + x / guess) / 2;
        }
        return guess;
    }

    double cbrtValue(double x) {
        // Guard clause: Bypasses division-by-zero if input is 0
        if (x == 0) return 0;

        double guess = x;
        for (int i = 0; i < 30; i++) {
            guess = (2 * guess + x / (guess * guess)) / 3;
        }
        return guess;
    }
};

int main() {
    MathOperations math;
    double number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Floor: " << math.floorValue(number) << endl;
    cout << "Ceil: " << math.ceilValue(number) << endl;
    cout << "Trunc: " << math.truncValue(number) << endl;
    cout << "Square root: " << math.sqrtValue(number) << endl;
    cout << "Cube root: " << math.cbrtValue(number) << endl;

    return 0;
}