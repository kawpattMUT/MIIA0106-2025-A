#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineid;
	string phone;
};
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineid << endl;
	cout << "Phone: " << s.phone << endl;
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	
	cout << "id: ";
	cin >> s1.id;

	cout << "nickname: ";
	cin >> s1.nickname;

	cout << "lineid: ";
	cin >> s1.lineid;

	cout << "phone: ";
	cin >> s1.phone;

	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);
	return 0;
}