//Library
#include <iostream>
using namespace std;
//UpperCase and LowerCase
//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
char toUpper(char letter) {
  int i;
  i = int(letter);
  return char(i - 32);
}
//Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
char toLower(char letter) {
  int i;
  i = int(letter);
  return char(i + 32);
}
//Write a main program, that calls the above function based on the input of the user. 
int main() {
  char letter;
  int i;
  //asking for user's input
  cout <<"Enter a letter: "<< endl;
  cin >> letter;
  i = int(letter);
  //If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value
  if(i >= 97 && i <= 122) {
    cout <<"The upper case is " << toUpper(letter) << "." << endl;
  }
  //and vice-versa.
  else if(i >= 65 && i <= 90) {
    cout <<"The lower case is " << toLower(letter) << "." << endl;
  }
  else {
    cout << "ERROR" << endl;
  }
  return 0;
}
