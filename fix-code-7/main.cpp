#include <iostream>
#include <string>
using namespace std;

int main() {
  int number_from_user = 0;
  cout << "Enter an integer: ";
  cin >> number_from_user;

  if (number_from_user < 0) {
     cout << number_from_user << " is negative!" << endl;
  }

  if (number_from_user > 0) {
     cout << number_from_user << " is positive!" << endl;
  }
}
