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

class book : public Publication, public Sales{
    protected:
    int pagecount;
    public:
    book() : pagecount(0) {};
    void getdata() {
        Sales ::getdata();
        Publication ::getdata();
        cout<< "enter pagecount: ";
        cin >> pagecount;
    }
    void putdata() {
        Sales ::putdata();
        Publication ::putdata();
        cout << "pagecount: " << pagecount << endl;
    }

};

class tape : public Publication, public Sales{
    protected:
    float minutes;
    public:
    tape() : minutes(0.0f) {};
    void getdata() {
        Sales ::getdata();
        Publication ::getdata();
        cout << "enter minutes: ";
        cin >> minutes;
    }
    void putdata() {
        Sales ::putdata();
        Publication ::putdata();
        cout << "minutes: " << minutes << endl;
    }
};

int main(){
    book b1;
    tape t1;
    b1.getdata();
    t1.getdata();
    b1.putdata();
    t1.putdata();
}
