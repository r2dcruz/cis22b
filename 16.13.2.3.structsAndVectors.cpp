#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PizzaInfo {
   string pizzaName;
   int numberOfCalories;
};

int main() {
   vector<PizzaInfo> pizzasInStore(2);

   cin >> pizzasInStore.at(0).pizzaName;
   cin >> pizzasInStore.at(0).numberOfCalories;

   cin >> pizzasInStore.at(1).pizzaName;
   cin >> pizzasInStore.at(1).numberOfCalories;

   /* Your code goes here */
   pizzasInStore.at(0).numberOfCalories = pizzasInStore.at(1).numberOfCalories;

   cout << "A " << pizzasInStore.at(0).pizzaName << " slice contains " << pizzasInStore[0].numberOfCalories << " calories." << endl;
   cout << "A " << pizzasInStore.at(1).pizzaName << " slice contains " << pizzasInStore[1].numberOfCalories << " calories." << endl;
   return 0;
}
