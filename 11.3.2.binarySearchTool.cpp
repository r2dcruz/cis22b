#include <iostream>
using namespace std;

void Find(int low, int high) {
   int mid; // Midpoint of low..high
   char answer;

   mid = (high + low) / 2;

   cout << "Is it " << mid << "? (l/h/y): ";
   cin >> answer;

   if((answer != 'l') &&
      (answer != 'h')) { // Base case:
      cout << "Thank you!" << endl;  // Found number!
   }
   else { // Recursive case: Guess in 
          // lower or upper half of range
      if (answer == 'l') { // Guess in lower half
         Find(low, mid); // Recursive call
      }
      else {               // Guess in upper half
         Find(mid + 1, high);     // Recursive call
      }
   }

   return;
}

int main() {
   cout << "Choose a number from 0 to 100." << endl;
   cout << "Answer with:" << endl;
   cout << "   l (your num is lower)" << endl;
   cout << "   h (your num is higher)" << endl;
   cout << "   any other key (guess is right)." << endl;

   Find(0, 100);

   return 0;
}
