#include <iostream>
#include <string>

using namespace std;

class Sales{
    protected:
    float array[3];
    public:
    void getdata(){
        for(int i = 0; i<=2; i++){
            cout << "enter sales amount " << i + 1 <<":";
            cin >> array[i];
        }
    }
    void putdata(){
       for(int i=0; i<=2; i++){
        cout << "sales amount " << i+1 <<":"<< array[i] << endl;
       }
    }
};
class Publication{
    protected:
    string title;
    float price;

    public:
    Publication() : title("null"), price(0.0f) {};
    void getdata() {
       cout << "enter title: ";
       cin >> title;
       cout << "enter price: ";
       cin >> price;
    }
    void putdata() {
       cout << "title: " << title << endl;
       cout << "price: " << price<< endl;
    }
};
class date{
    protected:
    int datee, month, year;
};

class Publication2: public Publication, public date{
    public:
    void getdata(){
        Publication ::getdata();
        cout << "enter date: ";
        cin >> datee;
        cout << "enter month: ";
        cin >> month;
        cout << "year: ";
        cin >> year;
    }
    void putdata(){
        Publication ::putdata();
        cout << "date: " << " " << datee << " - " << month << " - " << year << endl;
    }
};

class book : public Publication2, public Sales{
    protected:
    int pagecount;
    public:
    book() : pagecount(0) {};
    void getdata() {
        Publication2 ::getdata();
        Sales ::getdata();
        cout<< "enter pagecount: ";
        cin >> pagecount;
    }
    void putdata() {
        Publication2 ::putdata();
        Sales ::putdata();
        cout << "pagecount: " << pagecount << endl;
    }

};

class tape : public Publication2, public Sales{
    protected:
    float minutes;
    public:
    tape() : minutes(0.0f) {};
    void getdata() {
        Publication2 ::getdata();
        Sales ::getdata();
        cout << "enter minutes: ";
        cin >> minutes;
    }
    void putdata() {
        
        Publication2 ::putdata();
        Sales ::putdata();
        cout << "minutes: " << minutes << endl;
    }
};
class Disk : public Publication{
    enum disktype {CD, DVD};
    disktype type;

    public:
    void getdata() {
        Publication ::getdata();
        char choice;
        cout << "enter your type: ";
        cin >> choice;
        if(choice == 'C' || choice == 'c')
          type = CD;
        else if(choice == 'D' || choice == 'd')
          type = DVD;
        else
          cout << "invalid choice.";
    }
    void putdata() {
        Publication ::putdata();
        cout << "Type: " << (type == CD ? "CD" : "DVD");
    }
};
