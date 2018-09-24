//Library
#include <iostream>
using namespace std;
//Tax Rate Calculation using Functions 
//function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module.
void returnValues(int &unitCst, int&units, int &taxRt) {
  cout << "Enter UnitCst: ";
  cin >> unitCst;
  cout << "Enter units: ";
  cin >> units;
  cout << "Enter value for tax rate: ";
  cin >> taxRt;
}
//function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. 
void calculateTax(int unitCst, int units, int taxRt, int &salesTx, int &totDue) {
  salesTx = taxRt*(units*unitCst);
  totDue = salesTx + (units*unitCst);
}
//function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format.
void printValues(int unitCst, int units, int taxRt, int salesTx, int totDue) {
  cout << "Units = " << units << ", unit cost = " << unitCst << ", unit rate = " << taxRt << ", sales tax = " << salesTx << " and total due = " << totDue << "." << endl;
}
//main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. 
int main() {
  int unitCst, units, taxRt, salesTx, totDue;
  //program should call the functions listed above. 
  returnValues(unitCst, units, taxRt);
  calculateTax(unitCst, units, taxRt, salesTx, totDue);
  printValues(unitCst, units, taxRt, salesTx, totDue);
  return 0;
}
