#include <iostream>
#include <string>
using namespace std;	

struct student {
	string id;
	string nickname;
	string lineid;
	string phone;
};
int main() {
	student s1; // ตัวแปรโครงสร้าง s1	
	cout << "input student 1 " << endl;
	cout << "id: ";
	cin >> s1.id;

	cout << "nickname: ";
	cin >> s1.nickname;

	cout << "lineid: ";
	cin >> s1.lineid;

	cout << "phone: ";
	cin >> s1.phone;

	cout << "output student 1 " << endl;
	cout << "id: " << s1.id << endl;
	cout << "nickname: " << s1.nickname << endl;
	cout << "lineid: " << s1.lineid << endl;
	cout << "phone: " << s1.phone << endl;
	return 0;
}