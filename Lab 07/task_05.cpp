#include <iostream>
#include <string>

using namespace std;

class counterclass{
    protected:
    int count;
    public:
    counterclass() : count(0) {};
    int operator ++(){
        return ++count;
    }
    int operator --(){
        return --count;
    }
    void print(){
        cout << "count: " << count << endl;
    }

};
class post : public counterclass{
    public:
    int operator++(int){
        return count++;
    }
    int operator--(int){
        return count--;
    }
};
int main(){
    counterclass c1;
    ++c1;
    c1.print();
    post p1;
    p1++;
    p1.print();

}
