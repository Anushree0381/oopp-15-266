#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;


class Item {
public:
    string name;
    int quantity;
    double price;
};


void displayCart(const vector<Item>& cart) {
    cout << "\n--------------- SHOPPING CART ---------------\n";

    cout << left << setw(20) << "Item Name"
         << setw(12) << "Quantity"
         << setw(12) << "Price"
         << setw(12) << "Amount" << endl;

    cout << "----------------------------------------------\n";

    for (const auto& item : cart) {
        cout << left << setw(20) << item.name
             << setw(12) << item.quantity
             << setw(12) << item.price
             << setw(12) << item.quantity * item.price
             << endl;
    }
}


double calculateTotal(const vector<Item>& cart) {
    double total = 0;

    for (const auto& item : cart) {
        total += item.quantity * item.price;
    }

    return total;
}


void applyDiscount(vector<Item>& cart) {
    for (auto& item : cart) {
        if (item.price > 1000) {
            item.price = item.price * 0.90;
        }
    }
}


Item findMostExpensiveItem(const vector<Item>& cart) {
    auto expensive = cart[0];

    for (const auto& item : cart) {
        if (item.price > expensive.price) {
            expensive = item;
        }
    }

    return expensive;
}

int main() {
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> cart(n);

    // Input item details
    for (auto& item : cart) {
        cout << "\nEnter item name: ";
        cin >> item.name;

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;
    }


    cout << "\nOriginal Shopping Cart:";
    displayCart(cart);

    
    cout << "\nTotal Amount Payable: Rs. "
         << fixed << setprecision(2)
         << calculateTotal(cart) << endl;

    
    Item expensive = findMostExpensiveItem(cart);

    cout << "\nMost Expensive Item: " << expensive.name;
    cout << "\nPrice: Rs. " << expensive.price << endl;

    
    applyDiscount(cart);

    
    cout << "\nShopping Cart After Discount:";
    displayCart(cart);

    
      cout << "\nUpdated Cart Total: Rs. "
         << calculateTotal(cart) << endl;

    return 0;
}