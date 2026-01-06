#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};

struct Parent {
	string name;
	string relationship;
	Phone contact;
};

struct Student {
	string id;
	string nickname;
	string lineid;
	Phone myContact;
	Parent myParent;
};

static void inputStudent(Student& s1) {
	cout << "id: ";
	cin >> s1.id;

	cout << "nickname: ";
	cin >> s1.nickname;

	cout << "lineid: ";
	cin >> s1.lineid;

	cout << "myContact: ";
	cin >> s1.myContact.mobile;

	cout << "myParent: ";
	cin >> s1.myParent.name;

	cout << "relationship: ";
	cin >> s1.myParent.relationship;

	cout << "Parentnumber: ";
	cin >> s1.myParent.contact.mobile;

	cout << "home number: ";
	cin >> s1.myContact.home;
}

static void printStudent(const Student& s1) {
	cout << "-------student Data-------- " << endl;
	cout << "id :" << s1.id << endl;
	cout << "nickname :" << s1.nickname << endl;
	cout << "lineid :" << s1.lineid << endl;
	cout << "-------student contact-------- " << endl;
	cout << "myContact :" << s1.myContact.mobile << endl;
	cout << "home number :" << s1.myContact.home << endl;
	cout << "-------Parent Data-------- :" << endl;
	cout << "myParent :" << s1.myParent.name << endl;
	cout << "relationship :" << s1.myParent.relationship << endl;
	cout << "-------Parent contact-------- " << endl;
	cout << "Parentnumber: " << s1.myParent.contact.mobile << endl;
	cout << "home number: " << s1.myContact.home << endl;
}

int main() {
	Student s1;
	inputStudent(s1);
	printStudent(s1);
	return 0;
}