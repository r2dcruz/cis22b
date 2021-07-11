#include <iostream>
using namespace std;

struct ElapsedTime {
   int decadesVal;
   int yearsVal;
};

ElapsedTime ConvertToDecadesAndYears(int totalYears) {
   ElapsedTime tempVal;

   /* Your code goes here */
   tempVal.decadesVal = totalYears/10;
   tempVal.yearsVal = totalYears%10;
   return tempVal;
}

int main() {
   ElapsedTime elapsedYears;
   int totalYears;

   cin >> totalYears;

   elapsedYears = ConvertToDecadesAndYears(totalYears);

   cout << elapsedYears.decadesVal << " decades and " << elapsedYears.yearsVal << " years" << endl;

   return 0;
}
