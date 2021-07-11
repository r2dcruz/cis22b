#include <iostream>
#include <string>
using namespace std;

struct ProductInfo {
   string itemName;
   int itemQty;
};

ProductInfo AddToStock(ProductInfo productToStock, int increaseValue) {
   productToStock.itemQty = productToStock.itemQty + increaseValue;

   return productToStock;
}

int main() {
   ProductInfo mugInfo;
   int addQty;

   cin >> mugInfo.itemName >> mugInfo.itemQty;
   cin >> addQty;

   /* Your code goes here */
   mugInfo = AddToStock(mugInfo, addQty);

   cout << "Name: " << mugInfo.itemName << ", stock: " << mugInfo.itemQty << endl;

   return 0;
}
