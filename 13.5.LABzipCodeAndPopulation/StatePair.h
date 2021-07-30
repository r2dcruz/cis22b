#ifndef STATEPAIR
#define STATEPAIR

#include <iostream>
using namespace std;

template<typename T1, typename T2>
class StatePair {
   
   private:
   T1 key;
   T2 value;
   
public:

// Define a constructor, mutators, and accessors
// for StatePair
StatePair() //default constructor
{}
  
   // Parameterized constructor
   StatePair(T1 key, T2 value): key(key), value(value)
   {}

// set the key
void SetKey(T1 key) {
   this->key = key;
}

// set the value
void SetValue(T2 value) {
   this->value = value;
}

// return key
T1 GetKey() { return key;}
// return value
T2 GetValue() { return value;}

// Define PrintInfo() method
// display key and value in the format key : value
void PrintInfo() {
   cout<<key<<": "<<value<<endl;
   }
};

#endif
