//Library
#include <iostream>
using namespace std;
void flag (int x, int y, int &z) {
z = x + y;
}
int main () {
int a, b, c;
cout << "Enter two numbers: " << endl;
cin >> a >> b;
flag (a, b, c);
cout << "The sum is " << c << "." << endl;
return 0;
}
