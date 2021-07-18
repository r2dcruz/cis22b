#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   istringstream inSS;
   string userInput;
   string userMonth;
   int userDate;
   int userYear;

   getline(cin, userInput);
   inSS.str(userInput);

   /* Your solution goes here  */
   int i = 0;
   userMonth = "";
   while(userInput[i] != ' '){
       userMonth += userInput[i];
       i++;
   }
   i++;
   while(userInput[i] != ' '){
       userDate += (userInput[i] - '0');
       if(userInput[i + 1] != ' ') userDate *= 10;
       i++;
   }
   i++;
   for(int j = i; j < userInput.size(); j++){
       userYear += (userInput[j] - '0');
       if(j < userInput.size() - 1) userYear *= 10;
       i++;
   }

   cout << "Month: " << userMonth << endl
        << "Date: " << userDate << endl
        << "Year: " << userYear << endl;

   return 0;
}
