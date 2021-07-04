#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   cin >> passCode;

   /* Your solution goes here  */
   for (unsigned int i = 0; i < passCode.length(); i++) {
      if (isalpha(passCode.at(i))){
         passCode.at(i) = '_';
      }
   }
   cout << passCode << endl;
   return 0;
}
