#include <iostream>
#include <string>
using namespace std;
class YearTemperature
{
private:
    int temp[12];

public:
    YearTemperature()
    {
        for (int i = 0; i < 12; i++)
            temp[i] = 0;
    }
    int &operator[](int index)
    {
        if (index >= 0 && index < 12)
            return temp[index];
        else
            cout << "Index out of boundary!";
    }
    void display()
    {
        string months[12] = {"jan", "feb", "mar", "april", "may", "june", "july", "aug", "sept", "oct", "nov", "dec"};
        for (int i = 0; i < 12; i++)
        {
            cout << months[i] << ":" << temp[i] << "\'C" << endl;
        }
    }
};
int main()
{
    YearTemperature y1;
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter temperature for month " << i + 1 << ": ";
        cin >> y1[i];
    }
    cout << "All monthly temperatures: " << endl;
    y1.display();
    return 0;
}