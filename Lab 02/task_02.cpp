#include <iostream>

int main()
{
    /*
    Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers. Interaction with the program might look like this:
1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111
    */
    std::cout << "Select Conversion:\n1.) Celsius to Fahrenheit??\n2.) Fahrenheit to Celsius??\n";
    int choice;
    std::cin >> choice;
    float temperature;

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
        std::cout << "Temperature in Celsius: " << (temperature - 32) * 5 / 9;
        break;

    default:
        break;
    }
    return 0;
}