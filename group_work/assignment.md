Group 5 Assignment
This assignment required us to implemet our own functions of cpp maths such that we dont rely on built in functions.
1. Floor function
The floor function gives the largest integer that is less than or equal to a given number.
 floor(4.7) = 4
Our function first converts the double number into an integer using type changes, it changes doubles to integers thus truncating the original values. For positive numbers this gives the integer part directly.
For negative numbers with a decimal part, type casting moves the number towards zero. For example, -2.3 becomes -2. But the floor should be -3, so we check if the original number is smaller than the integer part and subtract 1.

2. Ceiling function
The ceiling function gives the smallest integer that is greater than or equal to a number.
 ceil(4.2) = 5
We first convert the number to an integer. If the original number is greater than the integer part, we add 1. If there is no decimal part, we just return the integer part.

3. Trunc function
The truncation function removes the decimal part of a number and leaves only the integer part.
 trunc(5.8) = 5
We used type casting to convert the double into an integer. C++ automatically removes the decimal part when doing this.

4. Square root function
For the square root function, we used an iterative method. We start with an estimated value called guess.
The guess is then improved repeatedly using iterations of our choosing.
The loop repeats the calculation 20 times. Each iteration normally makes the guess closer to the actual square root.

5. Cube root function
The cube root function also uses an iterative method. We start with an initial guess and then improve it several times.
The loop repeats this 20 times so that the answer becomes closer to the actual cube root.
For example, if the input is 27, the result should be close to 3.
