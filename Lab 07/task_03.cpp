#include <iostream>
#include <string>

using namespace std;

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

int main(){
    // book b1;
    // tape t1;
    Disk d1;
    cout << "--------------for book--------------" << endl;
    // b1.getdata();
    // b1.putdata();
    cout << "--------------for tape--------------" << endl;
    // t1.getdata();
    // t1.putdata();
    cout << "--------------for disk--------------" << endl;
    d1.getdata();
    d1.putdata();
}
