This program gets a Credit card number from the user and puts it through a series of functions to determine whether it is an actual credit card number or not
It works by subjecting the number through a number of rules to check if it satisfies all of them for it to be a valid credit card number e.g.

The main function is responsibe for calling the isValid function which in turn calls other functions that check for the validity of the credit card number and return the final answer to the user.

The main functions involved are:

1. bool isValid(long long number);

This function determines whether the credit card number is valid.

2. int sumOfDoubleEvenPlace(long long number);

This function works on digits in the even positions, it gets them doubles them and eventually sums up all the doubled numbers, if the doubling results in a two digit number, it adds up the two digits to get an overall final.

The "getDigit()" function is used incase the doubling results in a two digit number.

3.int getDigit(int number);
it ensures that the numbers in the even places are represented by one digit, if they are not, it doubles them and sums the up the results of the sm of two digits t get a single number

4.sumOfOddPlace(long long number);

This function finds and adds together the digits that occur in the odd-numbered positions of the credit card number.

The resulting sum is used by "isValid()" as part of the validation calculation.

5.bool prefixMatched(long long number, int d);

This function checks whether the specified digit or prefix "d" matches the beginning of the credit card number.

6.int getSize(long long d);

This function determines the number of digits contained in the credit card number.

7.long long getPrefix(long long number, int k);

This function gets the first "k" digits of the card number to check the prefix or company.

1. The user enters a credit card number.
2. The program determines the number of digits using "getSize()".
3. The program checks the beginning of the number using "getPrefix()" and "prefixMatched()".
4. The digits in the appropriate even positions are doubled and processed using "sumOfDoubleEvenPlace()" and "getDigit()".
5. The digits in the odd positions are added using "sumOfOddPlace()".
6. "isValid()" combines these results and checks whether the card number satisfies the required validation rules.
7. The program displays whether the card number is valid or invalid.

