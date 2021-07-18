#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char personName[100];
   char searchChar;
   char* searchResult = nullptr;

   cin.getline(personName, 100);
   cin >> searchChar;

   /* Your solution goes here  */
   char* p;
   for(int i=0;i<strlen(personName);i++) {
      if(searchChar==personName[i]) {
         p=&personName[i];
         searchResult=p;
         break;
      }
   }
   
   if (searchResult != nullptr) {
      cout << "Character found." << endl;
   }
   else {
      cout << "Character not found." << endl;
   }

   return 0;
}
