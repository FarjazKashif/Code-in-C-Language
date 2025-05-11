#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    int marks[5];

public:
    student()
    {
        for (int i = 0; i < 5; i++)
            marks[i] = 0;
    }
    int &operator[](int index)
    {
        if (index >= 0 && index < 5)
            return marks[index];
        else
            cout << "Index out of boundary!";
    }
    void display()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
        float avg = total / 5.00;
        cout << "Total marks: " << total << endl;
        cout << "Average marks: " << avg;
    }
};
int main()
{
    student s1;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks for subject" << i + 1 << ": ";
        cin >> s1[i];
    }
    s1.display();
    return 0;
}