#include <iostream>

using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // arr -> &arr[0]

    for (int i=0; i<5; i++) {
        cout << "Number " << i+1 << ": " << *ptr << endl;
        ptr++; // Shifting to the next address
    }

    return 0;
}