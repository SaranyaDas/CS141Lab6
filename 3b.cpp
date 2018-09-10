//Library
#include <iostream>
using namespace std;
//Void function takes two int parameters,
void MAX (int x, int y, int &z) {
  //Find maximum
  if (x > y) {
    z = x;
  }
  else {
    z = y;
  }
}
int main () {
  //Ask user for two numbers
  int a, b, c;
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;
  //Call function with numbers as arguments, 
  MAX (a, b, c);
  //Display maximum
  cout << "The maximum is " << c << "." << endl;
  return 0;
}
