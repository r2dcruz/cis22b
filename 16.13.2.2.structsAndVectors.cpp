#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PizzaInfo {
   string pizzaName;
   int numberOfCalories;
};

int main() {
   vector<PizzaInfo> listOfPizzas(2);

   listOfPizzas.at(0).pizzaName = "Barbecue";
   listOfPizzas.at(1).pizzaName = "Ham and Cheese";

   /* Your code goes here */
   cin>>listOfPizzas.at(0).numberOfCalories;
   cin>>listOfPizzas.at(1).numberOfCalories;

   cout << "A " << listOfPizzas.at(0).pizzaName << " slice contains " << listOfPizzas.at(0).numberOfCalories << " calories." << endl;
   cout << "A " << listOfPizzas.at(1).pizzaName << " slice contains " << listOfPizzas.at(1).numberOfCalories << " calories." << endl;

   return 0;
}
