#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineid;
	string phone;
};
// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	Student temp = a;
	a = b;
	b = temp;
}
// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (students[j].id > students[j + 1].id) {
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}
void printStudents(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		cout << students[i].id << endl;
		cout << students[i].nickname << endl;
		cout << students[i].lineid << endl;
		cout << students[i].phone << endl;
		cout << "----------------------\n";
	}
}
int main() {
	const int SIZE = 5;
	Student students[SIZE];
	
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
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
	sortByID(students, SIZE);
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);
	return 0;
}