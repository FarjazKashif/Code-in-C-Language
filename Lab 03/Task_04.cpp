#include <iostream>

using namespace std;

int main() {
    int len = 5;
    float *arr[len], avg=0;

    for (int i=0; i<len; i++) {
        cout << "Enter number " << i+1 << ": "; cin >> *arr[i];
        avg += *arr[i];
    }
    cout << "Average: " << avg/len;

    return 0;
}