#include <iostream>
#include <string>

int main()
{
    std::string operation;
    double operand1, operand2, result;

    std::cin >> operation >> operand1 >> operand2;

    if (operation == "+" || operation == "plus")
    {
        result = operand1 + operand2;
    }
    else if (operation == "-" || operation == "minus")
    {
        result = operand1 - operand2;
    }
    else if (operation == "*" || operation == "mul")
    {
        result = operand1 * operand2;
    }
    else if (operation == "/" || operation == "div")
    {
        result = operand1 / operand2;
    }
    else
    {
        std::cout << "Invalid operation";
        return 0;
    }

    std::cout << result << std::endl;

    return 0;
}