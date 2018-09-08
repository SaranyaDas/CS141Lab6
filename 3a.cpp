#include <iostream>
using namespace std;
//function to add two integers
int flag (int a,int b) {
int sum = a + b;
return sum;
}
int main() {
int a,b;
//ask user for values
cout<<"Enter two integers:" << endl;
cin >> a >> b;
cout<< flag (a,b) <<" is the sum." << endl;
//find maximum
if (a>= b) {
cout << a;
}
else {
cout << b;
}
cout << " is the maximum.";
return 0;
}
