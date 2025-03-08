#include <iostream>

int main()
{
    /*
    You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number
representing degrees Celsius, and then displays the corresponding degrees Fahrenheit
    */
    std::cout << "Select Conversion:\n1.) Celsius to Fahrenheit??\n2.) Fahrenheit to Celsius??\n";
    int choice;
    std::cin >> choice;
    int temperature;

    switch (choice)
    {
    case 1:
        std::cout << "Enter temperature: ";
        std::cin >> temperature;
        std::cout << "Temperature in Fahrenheit: " << (temperature * 9 / 5) + 32;
        break;
    case 2:
        std::cout << "Enter temperature: ";
        std::cin >> temperature;
        std::cout << "Temperature in Celsius: " << (temperature - 32) * 5/9;
        break;

    default:
        break;
    }
    return 0;
}