/*
You are tasked with designing a system that models a book with its chapters and pages. A
Book is composed of several Chapters, and each Chapter consists of multiple Pages.
Your task is to:
 Design a Book class that represents a book with its title, ISBN, and author. It should be
able to manage its chapters and allow adding chapters to the book.
 Design a Chapter class that represents a chapter in the book. Each chapter should have a
chapter number, title, and summary. The chapter should also manage its pages and allow
adding pages to the chapter.
 Design a Page class that represents a page in a chapter. Each page should have a page
number and content, such as text or images.
Create a UML class diagram that models the relationships between these classes.
*/

#include <iostream>
#include <vector>
using namespace std;

class Page
{
public:
    int number;
    string content;
    Page(int n, string c) : number(n), content(c) {}
};

class Chapter
{
public:
    int number;
    string title, summary;
    vector<Page> pages;
    Chapter(int n, string t, string s) : number(n), title(t), summary(s) {}
    void addPage(int n, string c)
    {
        pages.emplace_back(n, c);
    }
};

class Book
{
public:
    string title, ISBN, author;
    vector<Chapter> chapters;
    Book(string t, string i, string a) : title(t), ISBN(i), author(a) {}
    void addChapter(Chapter c)
    {
        chapters.push_back(c);
    }
};
