#include <iostream>
using namespace std;
int main() {
    int number;
    while (true) {
    bool prime = true;

    cout << "ป้อนจำนวนเต็มบวก: ";
    if (!(cin >> number)) {
        cout << "ป้อนข้อมูลไม่ถูกต้องไ!" << endl;
        return 1;
    }
    if (number <= 1) {
        prime = false;
    }
    else {
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
    }
	if (prime) { // ถ้าเป็นจำนวนเฉพาะ
        cout << number << " เป็นจำนวนเฉพาะ" << endl;
    }
    else { // มิฉะนั้น
        cout << number << " ไม่เป็นจำนวนเฉพาะ" << endl;
    }
    }
    return 0;
}