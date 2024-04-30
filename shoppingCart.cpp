// William Miller and Pedro Lopez

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart::ShoppingCart() {
   customerName = "none";
   currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) {
   customerName = name;
   currentDate = date;
}

string ShoppingCart::GetCustomerName() const {
   return customerName;
}

string ShoppingCart::GetDate() const {
   return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string item) {
bool found = false;
for (unsigned int i = 0; i < cartItems.size(); i++) {
   if (item == cartItems.at(i).GetName()) {
   cartItems.erase(cartItems.begin()+i);
   found = true;
   break;
   }
   }
   if (!found) {
cout << "Item not found in cart. Nothing removed." << endl;
}
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
bool found = false;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      if (item.GetName() == cartItems.at(i).GetName()) {
       found = true;
      if (item.GetDescription() != "none") {
        cartItems.at(i).SetDescription(item.GetDescription());
   }
      if (item.GetPrice() != 0) {
         cartItems.at(i).SetPrice(item.GetQuantity());
      }
      if (item.GetQuantity() != 0) {
         cartItems.at(i).SetQuantity(item.GetQuantity());
      }
   }
   }
   if (!found) {
      cout << "Item not found in cart. Nothing modified." << endl;
   }
}
   
int ShoppingCart::GetNumItemsInCart() {
   int totalItems = 0;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
   totalItems += cartItems.at(i).GetQuantity();
   }
   return totalItems;
}

double ShoppingCart::GetCostOfCart() {
   double totalCost = 0.0;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
   totalCost += cartItems.at(i).GetPrice()*cartItems.at(i).GetQuantity();
   }
   return totalCost;
}

void ShoppingCart::PrintTotal() {
   if (GetNumItemsInCart() == 0) {
      cout << customerName << "'s Shopping Cart - " << currentDate << endl;
      cout << "Number of Items: 0" << endl;
      cout << endl;
      cout << "SHOPPING CART IS EMPTY" << endl;
      cout << endl;
      cout << "Total: $0" << endl;
   } else {
      cout << customerName << "'s Shopping Cart - " << currentDate << endl;
      cout << "Number of Items: " << GetNumItemsInCart() << endl;
      cout << endl;
   for (unsigned int i = 0; i < cartItems.size(); i++) {
      cartItems.at(i).PrintItemCost();
   }
   cout << endl;
   cout << "Total: $" << GetCostOfCart() << endl;
}
}

void ShoppingCart::PrintDescriptions() {
   if (GetNumItemsInCart() == 0) {
      cout << "SHOPPING CART IS EMPTY" << endl;
   } else {
      cout << customerName << "'s Shopping Cart - " << currentDate << endl;
      cout << endl;
      cout << "Item Descriptions" << endl;
      for (unsigned int i = 0; i < cartItems.size(); i++) {
         cartItems.at(i).PrintItemDescription();
      }
   }
}
