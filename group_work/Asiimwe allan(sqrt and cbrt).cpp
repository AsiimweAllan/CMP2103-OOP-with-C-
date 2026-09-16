#include <iostream>
using namespace std;

double sqrt(double x)
{
    double guess = x / 2;
    for (int i = 0; i < 20; i++)
    {
    guess = (guess + x / guess) / 2;
    } // this makes continuous iterations until the root is obtained
    return guess;
}

double cbrt(double x)
{
    double guess = x / 3;
    for (int i = 0; i < 20; i++)
    {
        guess = (2 * guess + x / (guess * guess)) / 3;
    }
    return guess;
}

int main()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Square root = " << sqrt(x) << endl;
    cout << "Cube root = " << cbrt(x) << endl;
    return 0;
}