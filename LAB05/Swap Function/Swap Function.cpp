#include <iostream>
#include <cmath>
using namespace std;


void swapByValues(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
void swapValues(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	
	cout << "Before swap: a = " << a << ", b = " << b << endl;
	swapByValues(a, b);
	cout << "After swap(call by Value): a = " << a << ", b = " << b << endl;
	swapValues(a,b);
	cout << "After swap(call by ref): a = " << a << ", b = " << b << endl;
	return 0;
}