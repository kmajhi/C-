#include <iostream>
using namespace std;

int main() {
   int a, b, sum, diff, prod, mod;
   float div;
   
   cout << "Enter first number: ";
   cin >> a;
   
   cout << "Enter second number: ";
   cin >> b;
   
   sum = a + b;
   diff = a - b;
   prod = a * b;
   div = (float)a / b; // type casting to get a float result
   mod = a % b; // modulo operation
   
   cout << "Sum: " << sum << endl;
   cout << "Difference: " << diff << endl;
   cout << "Product: " << prod << endl;
   cout << "Quotient: " << div << endl;
   cout << "Modulo: " << mod << endl;
   
   return 0;
}
