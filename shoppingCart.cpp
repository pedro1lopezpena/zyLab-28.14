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
  
