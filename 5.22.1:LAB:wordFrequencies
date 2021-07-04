#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   vector<string> words;
   vector<int> counts;
   int size, count = 0;
   string str;
   cin >> size;
   for(int i = 0; i < size; ++i) {
       cin >> str;
       words.push_back(str);
   }
   for(int i = 0; i < size; ++i) {
          count = 0;
          for(int j = 0;j<words.size();j++){
        if(words[j] == words[i]){
           count++;
        }       
      }
       counts.push_back(count);
   }
   for(int i = 0; i < size; ++i) {
       cout << words[i] << " - " << counts[i] << endl;
   }
   return 0;
}

