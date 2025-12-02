#include <iostream>
#include <string>
using namespace std;
int main()
{
    // ประกาศตัวแปรสำหรับเก็บข้อมูลนักเรียน
    string studentID;
    string studentName;
    int score;
    string grade; // ตัวแปรสำหรับเก็บเกรด (A/B/C/D/F)
    // รับรหัสนักเรียนจากผู้ใช้
    cout << "Enter student ID: ";
    cin >> studentID;
    cin.ignore();// ล้าง newline ที่เหลือใน buffer ก่อนใช้ getline เพื่ออ่านชื่อที่มีช่องว่าง
    cout << "Enter student name: ";// รับชื่อ ที่มีช่องว่างตรงนามสกุล
    getline(cin, studentName);
    cout << "Enter score: ";// รับคะแนนเป็นจำนวนเต็ม
    cin >> score;
    cout << endl;
    cout << "----------------Student Report------------------" << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Score: " << score << endl;
    // ตรวจสอบเกรดตามช่วงคะแนน และกำหนดค่าให้ตัวแปร grade
    if (score >= 90) grade = "A";
    else if (score >= 80) grade = "B";
    else if (score >= 70) grade = "C";
    else if (score >= 60) grade = "D";
    else grade = "F";
    // แสดงเกรดที่คำนวณแล้ว
    cout << "Grade: " << grade << endl;
    cout << "-----------------------------------------------" << endl;
    return 0;
}
