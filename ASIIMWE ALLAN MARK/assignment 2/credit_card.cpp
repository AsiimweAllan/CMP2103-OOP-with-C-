#include <iostream>
#include <string>
using namespace std;

// function to get card number from user
long long card_number(){
    long long card_number = 0;
    cout << "Enter card number: ";
    cin >> card_number;
    return card_number;
}

// Return this number if it is a single digit,
// otherwise return the sum of the two digits
int getDigit(int number)
{
    if (number < 10){
    return number;
    }
    else{
        string number_string = to_string(number);
        return (number_string[0] - '0') + (number_string[1] - '0');
    }
}

// Get the result from Step 2
int sumOfDoubleEvenPlace(long long number)
{
    string card_number = to_string(number);
    int sum = 0;
    for (int i = 0; i < card_number.length(); i += 2){
        int doubled = (card_number[i] - '0') * 2;
    sum += getDigit(doubled);
    }
    return sum;
}

// Return sum of odd place digits in number
int sumOfOddPlace(long long number)
{
    int sum_odd = 0;
    string card_number = to_string(number);
    for (int i = 1; i < card_number.length(); i += 2){
        sum_odd += (card_number[i] - '0');
    }
    return sum_odd;
}

// Return the number of digits in d
int getSize(long long d){
    string number = to_string(d);
    return number.length();
}

// Return the first k digits from number
long long getPrefix(long long number, int k)
{
    string card_number = to_string(number);
    if (card_number.length() < k){
        return number;
    }
    string prefix = card_number.substr(0, k);
    return stoll(prefix);
}
// Return true if digit d is a prefix for number
bool prefixMatched(long long number, int d)
{
    int size = getSize(d);
    long long prefix = getPrefix(number, size);
    if (prefix == d){
    return true;
    }
    else{
    return false;
    }
}

// Return true if the card number is valid
bool isValid(long long number)
{
    int total = sumOfOddPlace(number) + sumOfDoubleEvenPlace(number);
    if (total % 10 == 0){
    return true;
    }
    else{
    return false;
    }
}

int main()
{
    long long card_num = card_number();
    cout << sumOfOddPlace(card_num) << endl;
    cout << sumOfDoubleEvenPlace(card_num) << endl;
    if (isValid(card_num)){
    cout << "Card number is valid.";
    }
    else{
    cout << "Invalid card number.";
    }
    return 0;
}