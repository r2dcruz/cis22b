#include <iostream>
using namespace std;

struct BirthdayDate {
   int numMonths;
   int numDays;
};

/* Your code goes here */

BirthdayDate SetBirth(int m1, int n1) {
   BirthdayDate date;
   date.numMonths = m1;
   date.numDays = n1;
   return date;
}

int main() {
   BirthdayDate myBirthday;
   int monthVal;
   int dayVal;

   cin >> monthVal >> dayVal;

   myBirthday = SetBirth(monthVal, dayVal);

   cout << "I was born on " << myBirthday.numMonths << "/" << myBirthday.numDays << "." << endl;

   return 0;
}
