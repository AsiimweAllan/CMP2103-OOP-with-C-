# Group 5 Assignment

## Introduction

This assignment was about creating our own versions of some common mathematical functions in C++. Instead of directly using the built in functions, we wrote functions for floor, ceiling, truncation, square root and cube root.

The main aim was to understand how these functions work and how they can be implemented using basic C++ concepts such as functions, type casting, conditions and loops.

## 1. Floor function

The floor function gives the largest integer that is less than or equal to a given number.

For example

* floor(4.7) = 4
* floor(4.0) = 4
* floor(-2.3) = -3

Our function first converts the double number into an integer using type casting. For positive numbers this gives the integer part directly.

For negative numbers with a decimal part, type casting moves the number towards zero. For example, -2.3 becomes -2. But the floor should be -3, so we check if the original number is smaller than the integer part and subtract 1.

```cpp
int Floor(double x)
{
    int integerPart = (int)x;

    if(x < integerPart){
        integerPart--;
    }

    return integerPart;
}
```

## 2. Ceiling function

The ceiling function gives the smallest integer that is greater than or equal to a number.

For example

* ceil(4.2) = 5
* ceil(4.0) = 4
* ceil(-2.3) = -2

We first convert the number to an integer. If the original number is greater than the integer part, we add 1. If there is no decimal part, we just return the integer part.

```cpp
int Ceil(double x)
{
    int n = (int)x;

    if (x > n)
        return n + 1;
    else
        return n;
}
```

## 3. Trunc function

The truncation function removes the decimal part of a number and leaves only the integer part.

For example

* trunc(5.8) = 5
* trunc(5.2) = 5
* trunc(-3.7) = -3

We used type casting to convert the double into an integer. C++ automatically removes the decimal part when doing this.

```cpp
int trunc(double number)
{
    return (int)number;
}
```

This is different from floor for negative numbers. For example, trunc(-3.7) gives -3 while floor(-3.7) gives -4.

## 4. Square root function

For the square root function, we used an iterative method. We start with an estimated value called `guess`.

The guess is then improved repeatedly using this formula

```text
guess = (guess + x / guess) / 2
```

The loop repeats the calculation 20 times. Each iteration normally makes the guess closer to the actual square root.

```cpp
double sqrt(double x)
{
    double guess = x / 2;

    for (int i = 0; i < 20; i++)
    {
        guess = (guess + x / guess) / 2;
    }

    return guess;
}

For example, if the user enters 25, the function keeps improving the guess until it gets close to 5.

## 5. Cube root function

The cube root function also uses an iterative method. We start with an initial guess and then improve it several times.

The formula used is

```text
guess = (2 * guess + x / (guess * guess)) / 3
```

The loop repeats this 20 times so that the answer becomes closer to the actual cube root.

```cpp
double cbrt(double x)
{
    double guess = x / 3;

    for (int i = 0; i < 20; i++)
    {
        guess = (2 * guess + x / (guess * guess)) / 3;
    }

    return guess;
}
```

For example, if the input is 27, the result should be close to 3.

## Conclusion

From this assignment we learned how some mathematical functions can be implemented without directly using the built in mathematical functions.

The floor, ceiling and trunc functions mainly used type casting and conditions while the square root and cube root functions used loops and repeated calculations to improve an estimated answer.

This also helped us understand how functions can be used to divide a program into smaller parts that each perform a specific task.
