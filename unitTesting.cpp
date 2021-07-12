#include <iostream>
using namespace std;


class TempConvert {
   public:
      void SetTemp(int tempVal) { 
         temp = tempVal; 
      }
      int GetTemp() const { 
         return temp; 
      }
      TempConvert() {
         temp = 1;
      }
      int InFahrenheit() {
          return (temp * 1.8) - 32; 
      }
   private:
      int temp;
};


int main() {
   TempConvert testData;
   cout << "Beginning tests." << endl;
   if (testData.GetTemp() != 0) {
      cout << "   FAILED initialise/get temp" << endl;
   }
   testData.SetTemp(10);
   if (testData.GetTemp() != 10) {
      cout << "   FAILED set/get temp" << endl;
   }
   testData.SetTemp(10);
   if (testData.InFahrenheit() != 50) {
      cout << "   FAILED InFahrenheit for 10 degrees" << endl;
   }
   cout << "Tests complete." << endl;
   return 0;
}

