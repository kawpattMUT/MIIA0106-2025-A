#include <iostream>
using namespace std;

int main()
{
	cout << "  0 to 20:" << endl;
    for (int i = 0; i <= 20; i += 2) {
        cout << "number : " << i << endl;
    }

	cout << " 19 to 1 " << endl;
    for (int i = 19; i >= 1; i -= 2    ) {
        cout << "number : " << i << endl;
    }

    cout << endl;
    return 0;
}