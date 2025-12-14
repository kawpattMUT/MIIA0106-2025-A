#include <iostream>
using namespace std;

int main()
{
    const int factor = 14;
    const int start = 1;
    const int end = 12; 

    cout << "ÊÙµÃ¤Ù³áÁè " << factor << ":\n";
    for (int i = start; i <= end; ++i)
    {
        cout << factor << " x " << i << " = " << factor * i << '\n';
    }

    return 0;
}

