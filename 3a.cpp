//Library
#include <iostream>
using namespace std;
//Function takes two int parameters,
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
int main () {
  //Ask user for two numbers
  int a, b, c;
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;
  //Call function with numbers as arguments, 
  c = MAX (a, b);
  //Display maximum
  cout << "The maximum is " << c << "." << endl;
  return 0;
}
