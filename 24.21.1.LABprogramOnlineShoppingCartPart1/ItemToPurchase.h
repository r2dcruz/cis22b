#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase {
   public: ItemToPurchase();

   void SetName(string ItemName);
   void SetPrice(int itemPrice);
   void SetQuantity(int itemQuantity);
   string GetName();
   
   int GetPrice();
   int GetQuantity();
   private:
   string itemName;
   int itemPrice;
   int itemQuantity;
   };

#endif
