// William Miller and Pedro Lopez

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string t_name, string t_description, int t_price, int t_quantity) {
    itemName = t_name;
    itemDescription = t_description;
    itemPrice = t_price;
    itemQuantity = t_quantity;
}

void ItemToPurchase::SetName(string t_name){
  itemName = t_name;
}

string ItemToPurchase::GetName() const {
  return ItemName;
}

void ItemToPurchase::SetPrice(int t_price) {
    itemPrice = t_price;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int t_quantity){
  itemQuantity = t_quantity;
}

int ItemToPurchase::GetQuantity() const { 
  return itemQuantity;
}

void ItemToPurchase::SetDescription(string t_description) {
    itemDescription = t_description;
}

string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << endl;
}

void ItemToPurchase::PrintItemDescription() {
    cout << itemName << ": " << itemDescription << endl;
}

