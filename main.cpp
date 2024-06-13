#include <iostream>
#include <iomanip> // for std::setw
using namespace std;

// Define a class to represent items in the list
class itemsList {
public:
    int id;
    string name;
    int price;
};

// Function to display the bill
void displayItems(itemsList items[], int numItems, string customerName, string customerAddress) {

    int total = 0;
    cout << "\n\n\n";
    cout << "\t\tLindokuhle Store\n";
    cout << "\t\t--------------\n";
    cout << "\n";
    cout << "Name: " << customerName << " \t Address: " << customerAddress << "\n";
    cout << "\n";
    cout << left << setw(5) << "Id" << setw(20) << "Item Name" << setw(10) << "Price" << "\n";
    cout << "-----------------------------------------------\n";

    int i = 0;
    while (i < numItems) {
        cout << left << setw(5) << items[i].id << setw(20) << items[i].name << setw(10) << items[i].price << "\n";
        total += items[i].price;
        i++;
    }

    cout << "-----------------------------------------------\n";
    cout << right << setw(35) << "Total: " << total << endl;
    cout << "\n";
    cout << "\t\tThank you for Shopping with US!\n";
    cout << "\n\n";
}

int main() {
    cout << "Welcome to Lindokuhle Store!" << endl;
    cout << "\n";

    string customerName;
    string customerAddress;
    int numItems;

    // Get customer details
    cout << "Enter your name: ";
    getline(cin, customerName);
    cout << "Enter your address: ";
    getline(cin, customerAddress);
    cout << "Enter total number of items: ";
    cin >> numItems;
    cout << "\n";

    // Create an array of List objects
    itemsList items[numItems];

    // Get item details
    int i = 0;
    while (i < numItems) {
        items[i].id = (i + 1);
        cout << "Enter name of item " << (i + 1) << ": ";
        cin >> ws; // to ignore any leading whitespace
        getline(cin, items[i].name);
        cout << "Enter price of item " << (i + 1) << ": ";
        cin >> items[i].price;
        i++;
    }

    // Call the display function to show the bill
    displayItems(items, numItems, customerName, customerAddress);

    return 0;
}

