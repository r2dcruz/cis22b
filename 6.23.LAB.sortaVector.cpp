#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */
void SortVector(vector<int>& myVec){
   int s = myVec.size();
   int temp;
   for(int i=0; i<s; i++){
       for(int j=0; j<s-i-1;j++){
           if(myVec.at(j)>myVec.at(j+1)){
               temp = myVec.at(j);
               myVec[j] = myVec[j+1];
               myVec[j+1] = temp;
           }
       }
   }
}

int main() {
   /* Type your code here */
   vector<int> myVec;
   int count, num;
   cin >> count;
   for(int i=0; i<count; i++){
       cin >> num;
       myVec.push_back(num);
   }
  
   SortVector(myVec);
  
   for(int i=0; i<count; i++){
       cout << myVec.at(i)<<" ";
   }
   cout<<endl;

   return 0;
}
