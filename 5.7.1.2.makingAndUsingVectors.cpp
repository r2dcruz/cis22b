#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   vector<int> numbers;
   int input;
    while (true) {
        cin >> input;
        if (input == -1)
            break;
        numbers.push_back(n);
    }
    int size = numbers.size() - 1;
    for (int i = size; i >= 0; --i) {
        cout << numbers.at(i) << endl;
   }

   return 0;
}
