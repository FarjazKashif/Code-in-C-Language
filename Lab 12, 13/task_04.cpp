#include <iostream>
using namespace std;

class FoodOrder {
public:
    void placeOrder() {
        cout << "Placing order...\n";
        checkStock();
        cookFood();
        generateInvoice();
        cout << "Order placed successfully!\n";
    }

private:
    void checkStock() {
        cout << "Checking stock...\n";
    }

    void cookFood() {
        cout << "Cooking food...\n";
    }

    void generateInvoice() {
        cout << "Generating invoice...\n";
    }
};

int main() {
    FoodOrder order;
    order.placeOrder();
    return 0;
}
