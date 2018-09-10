//Library
#include <iostream>
using namespace std;
//Function takes two int parameters
int flag (int a,int b) {
  //Add them and return sum
  int sum = a + b;
  return sum;
}
int main() {
  //Ask user for two numbers
  int a,b;
  cout<<"Enter two integers:" << endl;
  cin >> a >> b;
  //Call function with numbers as arguments and display sum
  cout << flag (a,b) << " is the sum." << endl;
  return 0;
}
