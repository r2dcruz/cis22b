#include "Encyclopedia.h"

#include <iostream>

// Define functions declared in Encyclopedia.h

void Encyclopedia :: SetEdition(string bookEdition) {
   edition = bookEdition;
   }

void Encyclopedia :: SetNumVolumes(int volumes) {
   numVolumes = volumes;
   }

string Encyclopedia :: GetEdition(){
   return edition;
}

int Encyclopedia :: GetNumVolumes() {
   return numVolumes;
   }
   
void Encyclopedia :: PrintInfo() {
   cout << "Book Information: " << endl;
   cout << "   Book Title: " << title <<endl;
   cout << "   Author: " << author << endl;
   cout << "   Publisher: " << publisher << endl;
   cout << "   Publication Date: " << publicationDate <<endl;
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Volumes: " << numVolumes << endl;
}
