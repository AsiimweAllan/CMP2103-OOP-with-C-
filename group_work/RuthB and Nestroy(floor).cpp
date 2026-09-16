#include <iostream>
using namespace std;

//function to calcutale floor of a number
int Floor(double x)
{
    int integerPart= (int)x;
    //for negative nubers with a decimal part,
    //move to the next smaller integer.
    if(x < integerPart){
        integerPart--;
    }
    return integerPart;
}
int main(){
    double x;
    cout << "Enter a number: ";
    cin >> x;
    int result = Floor(x);
    cout << "Floor of " << x << " =" << result << endl;

    return 0;
}