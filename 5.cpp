//Library
#include <iostream>
using namespace std;
//Different functions
int ADD (int x, int y) {
  //Add them and return sum
  int sum = x + y;
  return sum;
}
int MAX (int x, int y) {
//Find and return maximum
  int z;
  if (x > y) {
    z = x;
  }
  else {
    z = y;
  }
  return z;
}
int MIN (int x, int y) {
//Find and return minimum
  int z;
  if (x < y) {
    z = x;
  }
  else {
    z = y;
  }
  return z;
}
int main () {
  //Ask user to input 2 variables 
  char n;
  int a, b;
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;
  //Ask user for their desired operation
  cout << "Choose desired operation - finding the sum (A), maximum (B) or minimum (C) of two numbers: " << endl;
  //Call required function and display output 
  cin >> n;
  if (n == 'A') {
    cout << "The sum is " << ADD (a, b) << "." << endl;
  }
  else {
    if (n == 'B') {
      cout << "The maximum is " << MAX (a, b) << "." << endl;
    }
    else {
      if (n == 'C') {
        cout << "The minimum is " << MIN (a, b) << "." << endl;
      }
    }
  }
  return 0;
}
