/*
Assume that you want to generate a table of multiples of any given number. Write a program
that allows the user to enter the number and then generates the table, formatting it into 10
columns and 20 lines. Interaction with the program should look like this (only the first three
lines are shown):
Enter a number: 7
7 14 21 28 35 42 49 56 63 70
77 84 91 98 105 112 119 126 133 140
147 154 161 168 175 182 189 196 203 210
*/

#include <iostream>

int main()
{
    int input, ans, count = 1;

    std::cout << "Enter a Number: ";
    std::cin >> input;

    for (int i=1; i<=20; i++) {
        for (int j=1; j<=10; j++) {
            ans = input *count;
            if(i<=3) {
            std::cout << ans << "\t";
        }
            count ++;
        }
        std::cout << "\n";
    }
    return 0;
}