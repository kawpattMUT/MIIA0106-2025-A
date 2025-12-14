#include <iostream>
using namespace std;

int main()
{
	cout << "while " << endl;
	int number_while = 1;
	while (number_while <= 10) {
		cout << "number : " << number_while << endl;
		number_while++;
	}

	cout << "for " << endl;
	for (int number_for = 1; number_for <= 10; number_for++) {
		cout << "number : " << number_for << endl;
	}

	cout << "do - while " << endl;
	int number_do_while = 1;
	do {
		cout << "number : " << number_do_while << endl;
		number_do_while++;
	} while (number_do_while <= 10);

	return 0;
}