//Library
#include <iostream>
using namespace std;
//Void function
void flag (int x, int y, int &z) {
  //Adds two integers
  z = x + y;
}
int main () {
  //Ask user for two numbers
  int a, b, c;
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;
  //Call function with numbers as arguments
  flag (a, b, c);
  //Display sum
  cout << "The sum is " << c << "." << endl;
  return 0;
}
