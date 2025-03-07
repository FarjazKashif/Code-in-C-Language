/*
Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this

    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX

except that it should be 20 lines high, instead of the 5 lines shown here. One way to do this is
to nest two inner loops, one to print spaces and one to print Xs, inside an outer loop that steps
down the screen from line to line.
*/

#include <iostream>

int main()
{
    for (int i=0; i<20; i++) {
        for (int j=0; j<=20-i; j++) {
            std::cout << " ";
        }
        for (int k=1; k<=2*i-1; k++) {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
    return 0;
}