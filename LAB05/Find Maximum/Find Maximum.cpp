#include <iostream>
#include <cmath>
using namespace std;

int findMaximum(int a, int b, int c) {
	return max(a, max(b, c));
}
int main() {
	int num1, num2, num3;
	cout << "Enter 0ne numbers: ";
	cin >> num1;
	cout << "Enter two numbers: ";
	cin >> num2;
	cout << "Enter three numbers: ";
	cin >> num3;
	int maximum = findMaximum(num1, num2, num3);
	cout << "Max of three : " << maximum << endl;
	
	return 0;
}