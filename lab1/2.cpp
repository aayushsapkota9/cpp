#include <iostream>
#include <string>
using namespace std;

// Define a class for a Store Item
class Item
{
private:
    string itemName;
    int itemCode;
    double price;
    int quantity;

public:
    // Function to input item details
    void inputDetails()
    {
        cout << "Enter Item Name: ";
        getline(cin, itemName);
        cout << "Enter Item Code: ";
        cin >> itemCode;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    // Function to display item details
    void displayDetails()
    {
        cout << "\nItem Details:\n";
        cout << "Name: " << itemName << "\n";
        cout << "Code: " << itemCode << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Quantity: " << quantity << "\n";
    }
};

int main()
{
    Item item1; // Create an object of Item class

    item1.inputDetails();   // Take input
    item1.displayDetails(); // Display details

    return 0;
}
