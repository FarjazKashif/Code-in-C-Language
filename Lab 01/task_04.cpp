#include <iostream>

struct fraction
{
    int num;
    int den;
};


int main()
{
    /*
    If you have two fractions,
a/b and c/d, their sum can be obtained from the formula

Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form. (You don’t need to reduce it to lowest terms.) The interaction with
the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator (>>) can be chained to read
in more than one quantity at once: cin >> a >> dummychar >> b;
    */
   
   fraction f_frac;
   fraction s_frac;
   char c;
   
   std::cout << "Enter first Fraction (x/y): ";
   std::cin >> f_frac.num >> c >> f_frac.den;

   std::cout << "Enter second Fraction (x/y): ";
   std::cin >> s_frac.num >> c >> s_frac.den;

   std::cout << "Output: " << ((f_frac.num*s_frac.den) + (s_frac.num*f_frac.den)) << "/" << f_frac.den*s_frac.den;
    return 0;
}