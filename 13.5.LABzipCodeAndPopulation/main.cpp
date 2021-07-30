#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "StatePair.h"
using namespace std;

int main()
{
ifstream inFS; // File input stream
int zip;
int population;
string abbrev;
string state;
unsigned int i;

// ZIP code - state abbrev. pairs
vector<StatePair <int, string>> zipCodeState;

// state abbrev. - state name pairs
vector<StatePair<string, string>> abbrevState;

// state name - population pairs
vector<StatePair<string, int>> statePopulation;

// Fill the three vectors

// Try to open zip_code_state.txt file
inFS.open("zip_code_state.txt");

if (!inFS.is_open()) {
cout << "Could not open file zip_code_state.txt." << endl;
return 1; // 1 indicates error
   }
  
while (!inFS.eof()) {
StatePair <int, string> temp;
inFS >> zip;
if (!inFS.fail()) {
temp.SetKey(zip);
}
     
inFS >> abbrev;

   if (!inFS.fail()) {
temp.SetValue(abbrev);
}
zipCodeState.push_back(temp);
}
inFS.close();

// Try to open abbreviation_state.txt file
inFS.open("abbreviation_state.txt");
if (!inFS.is_open()) {
cout << "Could not open file abbreviation_state.txt." << endl;
return 1; // 1 indicates error
}
while (!inFS.eof()) {
StatePair <string, string> temp;
inFS >> abbrev;
if (!inFS.fail()) {
temp.SetKey(abbrev);
}
getline(inFS, state); //flushes endline
getline(inFS, state);
state = state.substr(0, state.size()-1);
if (!inFS.fail()) {
temp.SetValue(state);
}

abbrevState.push_back(temp);
}
inFS.close();

// Try to open state_population.txt file
inFS.open("state_population.txt");
if (!inFS.is_open()) {
cout << "Could not open file state_population.txt." << endl;
return 1; // 1 indicates error
}
while (!inFS.eof()) {
StatePair <string, int> temp;
getline(inFS, state);
state = state.substr(0, state.size()-1);
if (!inFS.fail()) {
temp.SetKey(state);
}
inFS >> population;
if (!inFS.fail()) {
temp.SetValue(population);
}
getline(inFS, state); //flushes endline
statePopulation.push_back(temp);
}
inFS.close();

cin >> zip;

   // loop over zipCodeState vector to get the state abbreviation
for (i = 0; i < zipCodeState.size(); ++i) {
// Using ZIP code, find state abbreviation
// use at for vector, vector do not have any function get
if(zipCodeState.at(i).GetKey() == zip) // zip code found
{
abbrev = zipCodeState.at(i).GetValue(); // get the state abbreviation for the zip
break;
}
}

   // loop over the abbrevState vector to get the state name
for (i = 0; i < abbrevState.size(); ++i) {
// Using state abbreviation, find state name
if(abbrevState.at(i).GetKey() == abbrev)
{
state = abbrevState.at(i).GetValue();
break;
}
}

   // loop over statePopulation vector to get the population for the state
for (i = 0; i < statePopulation.size(); ++i) {
// Using state name, find population. Print pair info.
if(statePopulation.at(i).GetKey() == state)
{
statePopulation.at(i).PrintInfo();
break;
}
}

return 0;
}
