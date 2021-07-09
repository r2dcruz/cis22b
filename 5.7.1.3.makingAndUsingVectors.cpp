#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   vector<int> myVec;
   while (1) {
      int temp;
      cin >> temp;
      if (temp == -1) {
         break;
      }
      myVec.push_back(temp);
   }
   if (myVec.back()%2 == 0) {
      for (int i = 0; i < myVec.size(); i++) {
         if (myVec.at(i)%2 == 0) {
            cout << myVec.at(i) << endl;
            }
         }
      }  else {
         for (int i = 0; i < myVec.size(); i++) {
            if (myVec.at(i)%2 == 1 || myVec.at(i)%2 == -1) {
               cout << myVec.at(i) << endl;
               }
            }
         }
   return 0;
}
