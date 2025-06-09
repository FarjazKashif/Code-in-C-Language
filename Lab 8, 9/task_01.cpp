/*
Design a library system that effectively manages the relationships between books, their
authors, and different editions of those books. In this system, each book should include a
title, ISBN, and publishing year. Each author should have a name and a birth year, and an
author can write multiple books. Additionally, each book can have multiple editions,
where each edition contains specific information such as the language it is published in and
its publication year. Each edition is associated with exactly one book. Draw a UML class
diagram to represent these relationships clearly.
*/

#include <iostream>
#include <vector>
using namespace std;

class Author {
public:
    string name;
    int birthYear;
    Author(string n, int y) : name(n), birthYear(y) {}
};

class Edition {
public:
    string language;
    int pubYear;
    Edition(string lang, int y) : language(lang), pubYear(y) {}
};

class Book {
public:
    string title, ISBN;
    int year;
    Author* author;
    vector<Edition> editions;

    Book(string t, string i, int y, Author* a) : title(t), ISBN(i), year(y), author(a) {}
    void addEdition(string lang, int year) {
        editions.push_back(Edition(lang, year));
    }
};
