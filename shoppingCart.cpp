// William Miller and Pedro Lopez
//

#include  "ShoppingCart.h"

ShoppingCart::ShoppingCart(){
  customerName = "none";
  currentDate = "January 1, 2024";
}
  
ShoppingCart::ShoppingCart(string t_name, string t_date){
  customerName = t_name;
  currentDate = t_date;
}

string ShoppingCart::GetCustomerName() const {
  return customerName;
}
  
string ShoppingCart::GetDate() const {
  return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item){
  cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string t_name){
  bool itemExists = 0;

  for (unsigned int i=0; i < cartItems.size(); i++){
    if (cartItems.at(i).GetName() = t_name){
        cartItems.erase(cartItems.begin() + i);
        itemExists = 1
          }
  }
  if (itemExists == 0){
      cout << 'Item not found in cart. Nothing removed." << endl;
        }
}

int ShoppingCart::GetQuantity() const {
  return quantity;
}

void ShoppingCart::SetQuantity(int t_quantity){
  quantity = t_quantity;

void ShoppingCart::ModifyItem(string t_name, int t_quantity) {

    bool itemExists = 0;

    for (unsigned int i = 0; i < cartItems.size(); i++) {
        if (cartItems.at(i).GetName() == t_name) {
            itemExists = 1;
            cartItems.at(i).SetQuantity(t_quantity);
        }
    }

    if (itemExists == 0) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

int ShoppingCart::GetNumItemsInCart() const {
    int numItems = 0;

    for (unsigned int i = 0; i < cartItems.size(); i++) {
        numItems += cartItems[i].GetQuantity();
    }

    return numItems;
}

int ShoppingCart::GetCostOfCart() const {
    int totalCost = 0;
    for (unsigned int i = 0; i < cartItems.size(); i++) {
        totalCost += cartItems[i].GetQuantity() * cartItems[i].GetPrice();
    }

    return totalCost;
}

string ShoppingCart::GetItemName() const {
    return itemName;
}

int ShoppingCart::GetPrice() const {
    return price;
}

void ShoppingCart::PrintTotal() {

    int total = 0;

    if (cartItems.size() == 0) {
        cout << "SHOPPING CART IS EMPTY" << endl << endl;
        cout << "Total: $" << total << endl << endl;
    }
    else {
        for (unsigned int i = 0; i < cartItems.size(); i++) {
            cout << cartItems[i].GetName() << " " << cartItems[i].GetQuantity() << " @ $" << cartItems[i].GetPrice();
            cout << " = $" << (cartItems[i].GetQuantity() * cartItems[i].GetPrice()) << endl;
        }

        for (unsigned int k = 0; k < cartItems.size(); k++) {
            total += (cartItems[k].GetQuantity() * cartItems[k].GetPrice());
        }

        cout << endl;
        cout << "Total: $" << total << endl << endl;
    }
}

string ShoppingCart::GetDescription() const {
    return description;
}

void ShoppingCart::PrintDescriptions() {
    for (unsigned int i = 0; i < cartItems.size(); i++) {
        cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription() << endl;
    }
    cout << endl;
}
