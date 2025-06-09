#include <iostream>
#include <string>

using namespace std;

class Publication
{
    string title;
    float price;

public:
    Publication() : title("null"), price(0.0f) {};
    void getdata()
    {
        cout << "enter title: ";
        cin >> title;
        cout << "enter price: ";
        cin >> price;
    }
    void putdata()
    {
        cout << "title: " << title << endl;
        cout << "price: " << price << endl;
    }
};

class book : public Publication
{
    int pagecount;

public:
    book() : pagecount(0) {};
    void getdata()
    {
        Publication ::getdata();
        cout << "enter pagecount: ";
        cin >> pagecount;
    }
    void putdata()
    {
        Publication ::putdata();
        cout << "pagecount: " << pagecount << endl;
    }
};

class tape : public Publication
{
    float minutes;

public:
    tape() : minutes(0.0f) {};
    void getdata()
    {
        Publication ::getdata();
        cout << "enter minutes: ";
        cin >> minutes;
    }
    void putdata()
    {
        Publication ::putdata();
        cout << "minutes: " << minutes << endl;
    }
};

int main()
{
    book b1;
    tape t1;
    b1.getdata();
    t1.getdata();
    b1.putdata();
    t1.putdata();
}
