#include <iostream>
#include <string>
using namespace std;
struct Student {
string id;
string nickname;
string lineid;
string phone;

};
int main() {
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "input student 1 " << endl;
		cout << "id: ";
		cin >> students[i].id;
		cout << "nickname: ";
		cin >> students[i].nickname;
		cout << "lineid: ";
		cin >> students[i].lineid;
		cout << "phone: ";
		cin >> students[i].phone;
		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++) {
		cout << students[i].id << endl;
		cout << students[i].nickname << endl;
		cout << students[i].lineid << endl;
		cout << students[i].phone << endl;
		cout << "----------------------\n";

	}
	return 0;
}