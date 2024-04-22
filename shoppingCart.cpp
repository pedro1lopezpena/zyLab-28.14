// William Miller and Pedro Lopez
//

#include  "ShoppingCart.h"

ShoppingCart::ShoppingCart(){
  customerName = "none";
  currentDate = "January 1, 2024";
}
  
ShoppingCart::ShoppingCart(string name, string date){
  customerName = name;
  currentDate = date;
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

void ShoppingCart::RemoveItem(string name){
  bool itemExists = 0;

  for (unsigned int i=0; i < cartItems.size(); i++){
    if (cartItems.at(i).GetName() = name){
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

void ShoppingCart::SetQuantity(int quantity){
  quantity = this->quantity;

void ShoppingCart::ModifyItem(string name, int quantity
