#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char movieTitle[100];
   char* movieResult = nullptr;

   cin.getline(movieTitle, 100);

   /* Your solution goes here  */
    for (int i = 0; i < strlen(movieTitle); ++i) {
        if (strncmp(movieTitle + i, "The", 3) == 0) {
            movieResult = movieTitle + i;
            break;
        } else {
           movieResult = NULL;
           }
    }

   cout << "Movie title contains The? ";
   if (movieResult != nullptr) {
      cout << "Yes." << endl;
   }
   else {
      cout << "No." << endl;
   }

   return 0;
}
