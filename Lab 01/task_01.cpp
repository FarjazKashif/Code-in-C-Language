#include <iostream>

int main()
{
    /*
    Write a program that generates the following table:
1990 135
1991 7290
1992 11300
1993 16200
Use a single cout statement for all output
    */
    int num_1 = 1990;
    int num_2;
    for (int i=0; i<=3; i++) {
        if(i==0) {
            num_2 = 135;
        } else if(i==1) {
            num_2 = 7290;
        } else if(i==2) {
            num_2 = 11300;
        } else if(i==3) {
            num_2 = 16200;
        }

        std::cout << num_1 + i << " " << num_2 << "\n";
    }
    return 0;
}