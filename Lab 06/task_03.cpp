#include <iostream>
#include <string>
using namespace std;
class remarks
{
private:
    string remark;

public:
    remarks() : remark(" ") {}
    remarks(const string &example) : remark(example) {}
    void display()
    {
        cout << remark;
    }
    void setter(string h)
    {
        remark = h;
    }
    remarks operator+=(const remarks &ex)
    {
        return remarks(remark + ex.remark);
    }
};
int main()
{
    remarks c1;
    remarks c2("Need some improvement in Physics.");
    remarks finalremarks;
    c1.setter("Excellent in Mathematics.");
    cout << "First Remarks: ";
    c1.display();
    cout << endl
         << "Second Remarks: ";
    c2.display();
    finalremarks = c1 += c2;
    cout << endl
         << "Final Remarks: ";
    finalremarks.display();
    return 0;
}
