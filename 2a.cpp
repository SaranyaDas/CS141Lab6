//Librarytakes two int parameters,
#include <iostream>
using namespace std;
//Function to add two integers
int flag (int a,int b) {
  int sum = a + b;
  return sum;
}
int main() {
  //Ask user for values
  int a,b;
  cout<<"Enter two integers:" << endl;
  cin >> a >> b;
  //Display sum
  cout<< flag (a,b) <<" is the sum." << endl;
  return 0;
}
