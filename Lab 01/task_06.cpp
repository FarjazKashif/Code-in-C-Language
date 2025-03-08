#include <iostream>

int main()
{
    /*
    Write a program that accepts three side lengths from the user, first verifies whether a
valid triangle can be formed (using the triangle inequality theorem), and then determines
if the triangle is equilateral, isosceles, or scalene.
    */
   
   int a, b, c;

   std::cout << "Enter side a of Triangle: ";
   std::cin >> a;
   std::cout << "Enter side b of Triangle: ";
   std::cin >> b;
   std::cout << "Enter side c of Triangle: ";
   std::cin >> c;

   if((a + b) > c) {
    if((c + b) > a) {
        std::cout << "Two Sides are greater!";
    } else if((a + c) > b) {
        std::cout << "Two Sides are greater!";
    } else {
        std::cout << "Not a triangle inequality theorem!";
    }
} else if((c + b) > a) {
    if((a + b) > c) {
        std::cout << "Two Sides are greater!";
    } else if((a + c) > b) {
        std::cout << "Two Sides are greater!";
    } else {
        std::cout << "Not a triangle inequality theorem!";
    }
} else if((a + c) > b) {
    if((a + b) > c) {
        std::cout << "Two Sides are greater!";
    } else if((c + b) > a) {
        std::cout << "Two Sides are greater!";
    } else {
        std::cout << "Not a triangle inequality theorem!";
    }
} else {
    std::cout << "Not a triangle inequality theorem!";
}

    return 0;
}