#include <iostream>
using namespace std;

int Ceil(double x)
{
    int n = (int)x;
    if (x > n)
        return n + 1;
    else
        return n;
}

int main()
{
    double x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Ceiling = " << Ceil(x);
    return 0;
}