/*
Create the equivalent of a four-function calculator. The program should ask the user to enter a
number, an operator, and another number. (Use floating point.) It should then carry out the
specified arithmetical operation: adding, subtracting, multiplying, or dividing the two
numbers. Use a switch statement to select the operation. Finally, display the result.
When it finishes the calculation, the program should ask whether the user wants to do another
calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the program might
look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
*/

#include <iostream>

struct calculator
{
    float f_num;
    float s_num;
};

int main()
{
    calculator ans;
    char oper;
    std::cout << "Enter first number, operator, second number (10 / 3): ";
    std::cin >> ans.f_num >> oper >> ans.s_num;

    switch (oper)
    {
    case '+':
        std::cout << "Answer = " << ans.f_num + ans.s_num;
        break;
    case '-':
        std::cout << "Answer = " << ans.f_num - ans.s_num;
        break;
    case '*':
        std::cout << "Answer = " << ans.f_num * ans.s_num;
        break;
    case '/':
        std::cout << "Answer = " << ans.f_num / ans.s_num;
        break;

    default:
        break;
    }
    return 0;
}