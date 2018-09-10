//Library
#include <iostream>
using namespace std;

int A (int x, int y) {
int w = x + y;
return w;
}

void B (int x, int y, int &z) {
z = A (x, y);
}

int main () {
int a, b, c;
cout << "Enter two numbers: " << endl;
cin >> a >> b;
B (a, b, c);
cout << "The sum is " << c << "." << endl;
return 0;
}

