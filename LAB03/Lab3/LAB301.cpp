#include <iostream>
using namespace std;    

int main(void)
{
	int A, B;

	cout << "Enter A: ";
	cin >> A;
	cout << "Enter B: ";
	cin >> B;
	cout << endl;
	cout << "A + B = " << A + B << endl; //บวก
	cout << "A - B = " << A - B << endl; //ลบ
	cout << "A * B = " << A * B << endl; //คูณ
	cout << "A / B = " << A / B << endl; //หารจำนวนเจ็ม
	cout << "A % B = " << A % B << endl; //หารเอาเศษ
	
	return 0;
}