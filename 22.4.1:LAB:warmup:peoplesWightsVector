#include <iostream>
#include <iomanip>              // For setprecision
// FIXME include vector library
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   vector < double > weights;
   double weight = 0.0;
   double sum = 0.0;
   double average = 0.0;
   double max_weight = -1.0;
   
   for (int i = 1; i <= 5; i++) {
      cout << "Enter weight " << i << ":" << endl;
      cin >> weight;
      weights.push_back(weight);
      }
      
      cout << fixed << setprecision(2);
      cout << "You entered: ";

      
      for (int j = 0; j <= 4; j++) {
         sum += weights[j];
         if (weights[j] > max_weight) {
         max_weight =+ weights[j];
         }
         cout << weights[j] << " ";
      }
      cout << endl << endl;
      
      average = sum / 5.0;
      
      cout << "Total weight: " << sum << endl;
      cout << "Average weight: " << average << endl;
      cout << "Max weight: " << max_weight << endl;
      
      return 0;
}
