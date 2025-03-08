#include <iostream>

struct fraction
{
    int num;
    int den;
};

int main()
{
    /*
    Write a program that prompts the user to enter a single alphabet character. The program
should determine whether the character is a vowel (a, e, i, o, u) or a consonant using
conditions.
Hints:
 Remember to handle both uppercase and lowercase letters.
 Consider validating that the input is indeed a letter.
    */

    char vowel;
    char *ptr = &vowel;

    std::cout << "Enter a Letter: ";
    std::cin >> vowel;

    if(*ptr == 'a' || 'A') {
        std::cout << "Vowel";
    } else if(*ptr == 'e' || 'E') {
        std::cout << "Vowel";
    } else if(*ptr == 'i' || 'I') {
        std::cout << "Vowel";
    } else if(*ptr == 'o' || 'O') {
        std::cout << "Vowel";
    } else if(*ptr == 'U' || 'u') {
        std::cout << "Vowel";
    } else {
        std::cout << "Not a Vowel";
    }
    
    return 0;
}