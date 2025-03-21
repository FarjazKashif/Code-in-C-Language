#include <iostream>

using namespace std;

int main() {
    int len = 5;
    float arr[len], avg=0;

    for (int i=0; i<len; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> *(arr + i);
        /*
        arr -> itself &arr[0]
        1. // 100 + (0*4)
        2. // 100 + (1*4)
        */
       avg += *(arr + i);
    }
    cout << "\nAverage = " << avg/len;

    return 0;
}
