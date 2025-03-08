#include <iostream>

int main()
{
    /*
    On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955. Write
a program that allows the user to enter an amount in dollars, and then displays this value
converted to these four other monetary units.
    */
    std::cout << "Curreny Converter!!\n";
    std::cout << "Enter amount in $: ";
    
    float usd = 1.487;
    float french = 0.172; // Actual Value is 0.93
    float euro = 0.584; // Actual Value is 0.93
    float yen = 0.00955; // Actual Value is 147.77
    float input;
    std::cin >> input;
    
    std::cout << "$" << input << " in USD: " << input << "\n$" << input << " in French: " << input * french << "\n$" << input << " in German Euro: " << input * euro << "\n$" << input << " in Yen: " << input*yen;

    return 0;
}