#include "ListItem.h"
#include<string>
#include<list>
#include<iostream>

using namespace std;

int main(int argc, char const *argv[]) {
   list<ListItem> shoppingList;
   string item;
   
   while(true) {
      getline(cin,item);
      if(item=="-1")
      break;
      ListItem l1(item);
      shoppingList.push_back(l1);
      }

   for (auto it=shoppingList.begin(); it != shoppingList.end(); it++) {
      (*it).PrintNodeData();
   }
return 0;
}
