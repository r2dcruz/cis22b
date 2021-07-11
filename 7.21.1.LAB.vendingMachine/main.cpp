#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	/* Type your code here */
	int a, b;
	cin >> a >> b;
	VendingMachine v;
	v.Purchase(a);
	v.Restock(b);
	v.Report();
}
