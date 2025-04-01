#include <iostream>
#include <string.h>

using namespace std;

/*
A library wants to manage books, where each book has a title, author, and price. A universal
discount rate should be applied to all books. To achieve this, design a Book class with private
attributes for title, author, and price. Provide setters and getters to control price modifications. Use
a static data member for the universal discount rate, ensuring all books receive the same discount
percentage. The program should demonstrate creating multiple books, applying discounts, and
displaying final prices.
*/

class Book {
private:
    string title;
    string author;
    double price;
    static double discountRate;

public:
    Book(string t, string a, double p) : title(t), author(a), price(p) {}

    void setPrice(double p) { price = p; }

    static void setDiscountRate(double d) { discountRate = d; }

    void display() const {
        double discountedPrice = price - (price * (discountRate / 100));
        cout << "Title: " << title 
             << "\nAuthor: " << author 
             << "\nOriginal Price: $" << price
             << "\nDiscounted Price: $" << discountedPrice << "\n" << endl;
    }
};

double Book::discountRate = 0; 

int main() {
    Book::setDiscountRate(20); 

    Book b1("OOPS in C++", "ABC", 200);
    Book b2("Data Structures", "XYZ", 300);

    b1.display();
    b2.display();

    return 0;
}