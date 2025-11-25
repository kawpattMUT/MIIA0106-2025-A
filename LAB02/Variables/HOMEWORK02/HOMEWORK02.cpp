#include <iostream>
#include <string>
 using namespace std;

int main()
{
    string name;
    int age; 
	float height;
	// รับข้อมูลจากผู้ใช้
	cout << "Enter your name: ";
	getline(cin, name); //รับข้อความ
	// รับข้อมูลอายุ
	cout << "Enter your age: ";
	cin >> age;
	// รับข้อมูลส่วนสูง
	cout << "Enter your height in CM: ";
	cin >> height; 
	cout << endl;; //เว้นบรรทัด
    
	cout << "----------Profile-----------" << endl;;
	cout << "Name: " << name << endl;;
	cout << "Age: " << age << " years old" << endl;;
	cout << "Height: " << height << " CM" << endl;;
	cout << "----------------------------" << endl;;
    return 0;
}

