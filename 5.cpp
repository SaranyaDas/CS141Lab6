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
  //Ask user their desired operation
  cout << "Choose desired operation - finding the sum (ADD), maximum (MAX) or minimum (MIN) of two numbers: " << endl;
  //Call required function and display output 
  cin >> n;
  if (n == ADD) {
    cout << "The sum is " << ADD (a, b) << "." << endl;
  }
  else {
    if (n == MAX) {
      cout << "The maximum is " << MAX (a, b) << "." << endl;
    }
    else {
      if (n == MIN) {
        cout << "The minimum is " << MIN (a, b) << "." << endl;
      }
    }
  }
  return 0;
}
