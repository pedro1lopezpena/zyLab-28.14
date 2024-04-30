#include <iostream>
#include "ShoppingCart.h"
 
using namespace std;
 
void PrintMenu() {
    cout << "MENU\n"
         << "a - Add item to cart\n"
         << "d - Remove item from cart\n"
         << "c - Change item quantity\n"
         << "i - Output items' descriptions\n"
         << "o - Output shopping cart\n"
         << "q - Quit\n";
}
 
char GetMenuOption() {
    char option;
    cout << "\nChoose an option:\n";
    cin >> option;
    // Ensure valid input
    while (option != 'a' && option != 'd' && option != 'c' && option != 'i' && option != 'o' && option != 'q') {
        cout << "Choose an option:\n";
        cin >> option;
    }
    return option;
}
 
void ExecuteMenu(char choice, ShoppingCart& cart) {
    string name, description;
    int price, quantity;
 
    switch (choice) {
        case 'a': {
            cin.ignore(); // Clear newline character in the input buffer
            ItemToPurchase newItem;
 
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, name);
            newItem.SetName(name);
 
            cout << "Enter the item description:" << endl;
            getline(cin, description);
            newItem.SetDescription(description);
 
            cout << "Enter the item price:" << endl;
            cin >> price;
            newItem.SetPrice(price);
 
            cout << "Enter the item quantity:" << endl;
            cin >> quantity;
            newItem.SetQuantity(quantity);
 
            cart.AddItem(newItem);
            cout << endl;
            break;
        }
        case 'd': {
            cin.ignore(); // Clear newline character in the input buffer
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            getline(cin, name);
            cart.RemoveItem(name);
            cout << endl;
            break;
        }
        case 'c': {
            cin.ignore(); // Clear newline character in the input buffer
            ItemToPurchase modItem;
 
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, name);
            modItem.SetName(name);
 
            cout << "Enter the new quantity:" << endl;
            cin >> quantity;
            modItem.SetQuantity(quantity);
 
            cart.ModifyItem(modItem);
            cout << endl;
            break;
        }
        case 'i': {
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescriptions();
            cout << endl;
            break;
        }
        case 'o': {
            cout << "OUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
            cout << endl;
            break;
        }
        case 'q':
            cout << "Quit" << endl;
            break;
        default:
            cout << "Invalid option." << endl;
    }
}
 
int main() {
    string customerName;
    string currentDate;
 
    cout << "Enter customer's name:" << endl;
    getline(cin, customerName);
    cout << "Enter today's date:" << endl;
    getline(cin, currentDate);
 
    ShoppingCart cart(customerName, currentDate);
    cout << "\nCustomer name: " << customerName << endl;
    cout << "Today's date: " << currentDate << "\n\n";
 
    char option = ' ';
    while (option != 'q') {
        PrintMenu();
        option = GetMenuOption();
        if (option != 'q') {
            ExecuteMenu(option, cart);
        }
    }
 
    return 0;
}
