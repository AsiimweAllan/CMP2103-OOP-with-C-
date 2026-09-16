/*
Write a program that prompts the user to enter a credit card number as an integer. Display whether the number is valid or invalid. Design your program to use the following functions:

//Return true if the card number is valid
bool isValid(long long number);

//Get the result from Step 2
int sumOfDoubleEvenPlace(long long number);

//Return this number if it is a single digit, otherwise, return the sum of the two digits
int getDigit(int number);

//Return sum of odd place digits in number
int sumOfOddPlace(long long number);

//Return true if the digit d is a prefix for number
bool prefixMatched(long long number, int d);

//Return the number of digits in d
int getSize(long long d);

//Return the first k number of digits from number. If the number of digits in number is less than k, return number.
long long getPrefix(long long number, int k);
*/

#include<iostream>
#include<string>
using namespace std;

//function to get card number from user
long long card_number(){
    long long card_number=0;
    cout << "Enter card number: ";
    cin >> card_number;
    return card_number;
} //remove after
int sumOfDoubleEvenPlace(long long number){
    string card_number = to_string(number);//convert card number to string
    int sum = 0;
    for(int i=0;i<card_number.length();i+=2){
        if(((card_number[i]-'0')*2) < 10 ){
            sum += 2*(card_number[i]-'0');
        }
        else{
            int new_number = (card_number[i]-'0')*2;
            string number = to_string(new_number);
            //then we add the new digits
            for(int j=0;j<2;j++){
            sum += (number[j]-'0');
            }
        }
        
    }
    return sum;
}
int sumOfOddPlace(long long number){
    int sum_odd=0;
    string card_number = to_string(number);
    for(int i=1;i<card_number.length();i+=2){
            sum_odd += (card_number[i]-'0');
}
return sum_odd;
}
int getDigit(int number);
bool isValid(long long number);
bool prefixMatched(long long number, int d);
int getSize(long long d);
long long getPrefix(long long number, int k);
int main(){
    long long card_num = card_number();
    int total = sumOfOddPlace(card_num)+ sumOfDoubleEvenPlace(card_num); 
    cout << sumOfOddPlace(card_num) <<endl;
    cout << sumOfDoubleEvenPlace(card_num) <<endl;
    if(total%10 == 0){
        cout << "Card number is valid. ";

    }
    else
    cout << "Invalid card number.";
    return 0;
}