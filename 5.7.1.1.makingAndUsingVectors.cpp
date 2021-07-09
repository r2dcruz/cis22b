#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Your code goes here */
   vector<int> v;
    int n;
    while (true) {
        cin >> n;
        if (n == -1)
            break;
        v.push_back(n);
    }
    n = v.back();
    v.pop_back();
    for (int i = 0; i < v.size(); ++i) {
        v[i] *= n;
    }
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }

   return 0;
}
