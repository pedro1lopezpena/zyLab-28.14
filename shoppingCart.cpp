// William Miller and Pedro Lopez

#include "ItemToPurchase.h"
#include <iostream>

 
ItemToPurchase::ItemToPurchase(const string& name, const string& description, int price, int quantity)

    : itemName(name), itemDescription(description), itemPrice(price), itemQuantity(quantity) {}
 

void ItemToPurchase::SetName(const string& name) {

    itemName = name;

}


string ItemToPurchase::GetName() const {

    return itemName;

}

 
void ItemToPurchase::SetPrice(int price) {

    itemPrice = price;

}

int ItemToPurchase::GetPrice() const {

    return itemPrice;

}


void ItemToPurchase::SetQuantity(int quantity) {

    itemQuantity = quantity;

}
 

int ItemToPurchase::GetQuantity() const {

    return itemQuantity;

}


void ItemToPurchase::SetDescription(const string& description) {

    itemDescription = description;

}


string ItemToPurchase::GetDescription() const {

    return itemDescription;

}
 

void ItemToPurchase::PrintItemCost() const {

    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;

}

 
void ItemToPurchase::PrintItemDescription() const {

    cout << itemName << ": " << itemDescription << endl;

}
