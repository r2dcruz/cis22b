/**
Read integers from input and store each 
integer into a vector until -1 is read. 
Do not store -1 into the vector. 
Then, output all values in the vector 
in reverse order, each on a new line.

Ex: If the input is 36 31 64 94 -1, the output is:

94
64
31
36

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   vector <int> numbers;
   int vectorList;
   int userInput;

   cin >> userInput;

   while (vectorList != -1) {
      numbers.push_back(userInput);
   }
   

   return 0;
}