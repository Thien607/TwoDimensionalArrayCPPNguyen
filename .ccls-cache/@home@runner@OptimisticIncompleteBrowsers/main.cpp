#include <iostream>

using namespace std;

int main() {
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK];

  // Part 1: Static input data
  int staticData[CITY][WEEK] = {
      {52, 54, 50, 58, 62, 60, 61}, // New York City
      {72, 74, 70, 76, 78, 75, 77}  // Los Angeles
  };

  // Copying static data into temperature array
  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      temperature[i][j] = staticData[i][j];
    }
  }

  cout << "Displaying Static Values:\n";
  // Displaying static data
  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      cout << ((i == 0) ? "New York City" : "Los Angeles") << ", Day "
           << ((j == 0)   ? "Monday"
               : (j == 1) ? "Tuesday"
               : (j == 2) ? "Wednesday"
               : (j == 3) ? "Thursday"
               : (j == 4) ? "Friday"
               : (j == 5) ? "Saturday"
                          : "Sunday")
           << " = " << temperature[i][j] << endl;
    }
  }

  // Part 2: User input data
  cout << "\nEnter all temperature for a week of New York City and then Los "
          "Angeles. \n";

  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      cout << ((i == 0) ? "New York City" : "Los Angeles") << ", Day "
           << ((j == 0)   ? "Monday"
               : (j == 1) ? "Tuesday"
               : (j == 2) ? "Wednesday"
               : (j == 3) ? "Thursday"
               : (j == 4) ? "Friday"
               : (j == 5) ? "Saturday"
                          : "Sunday")
           << " : ";
      cin >> temperature[i][j];
    }
  }

  cout << "\n\nDisplaying User Input Values:\n";

  // Displaying user input data
  for (int i = 0; i < CITY; ++i) {
    for (int j = 0; j < WEEK; ++j) {
      cout << ((i == 0) ? "New York City" : "Los Angeles") << ", Day "
           << ((j == 0)   ? "Monday"
               : (j == 1) ? "Tuesday"
               : (j == 2) ? "Wednesday"
               : (j == 3) ? "Thursday"
               : (j == 4) ? "Friday"
               : (j == 5) ? "Saturday"
                          : "Sunday")
           << " = " << temperature[i][j] << endl;
    }
  }

  // Extra credit: Storing city temperatures in separate arrays
  int cityOne[WEEK];
  int cityTwo[WEEK];

  // Copying data into separate arrays
  for (int j = 0; j < WEEK; ++j) {
    cityOne[j] = temperature[0][j];
    cityTwo[j] = temperature[1][j];
  }

  cout << "\n\nDisplaying City Temperatures from Separate Arrays:\n";

  // Displaying city temperatures from separate arrays
  cout << "New York City temperatures: ";
  for (int i = 0; i < WEEK; ++i) {
    cout << cityOne[i] << " ";
  }
  cout << endl;

  cout << "Los Angeles temperatures: ";
  for (int i = 0; i < WEEK; ++i) {
    cout << cityTwo[i] << " ";
  }
  cout << endl;

  return 0;
}
