#include <iostream>
#include <iomanip>
using namespace std;

void generateInvoice(string itemName, int quantity, float pricePerUnit) {
    float total = quantity * pricePerUnit;
    cout << fixed << setprecision(2);
    cout << "\nInvoice (Unit-based):" << endl;
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << " x $" << pricePerUnit << endl;
    cout << "Total: $" << total << endl;
}

void generateInvoice(string itemName, float weightKg, float pricePerKg) {
    float total = weightKg * pricePerKg;
    cout << fixed << setprecision(2);
    cout << "\nInvoice (Weight-based):" << endl;
    cout << "Item: " << itemName << endl;
    cout << "Weight: " << weightKg << " kg x $" << pricePerKg << endl;
    cout << "Total: $" << total << endl;
}

int main() {
    generateInvoice("Pen", 3, 2.0);
    generateInvoice("Apples", 1.5f, 4.0f);

    return 0;
}
