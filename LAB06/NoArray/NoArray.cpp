#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string name, id;
	double score;
	char grade;
	// TODO: รับชื่อ (getline)
	// TODO: รับรหัสและคะแนน (cin)
	// TODO: calculateGrade(score, grade);
	// TODO: displayStudentInfo(name, id, score, grade);
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter ID: ";
	cin >> id ;
	cout << "Enter score: ";
	cin >> score;
	if (score >= 80)
		grade = 'A';
	else if (score >= 70)
		grade = 'B';
	else if (score >= 60)
		grade = 'C';
	else if (score >= 50)
		grade = 'D';
	else
		grade = 'F';
	
	cout << "--------Student information-------" << endl;
	cout << "student Name" << ": " << name << endl;
	cout << "student ID" << ": " << id << endl;
	cout << "Score" << ": " << score << endl;
	cout << "Grade" << ": " << grade << endl;
	cout << "----------------------------------" << endl;

	return 0;
}