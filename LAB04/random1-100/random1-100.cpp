#include <iostream>
#include <random>
#include <limits>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);

    int target = dist(gen);

    cout << "·ÒÂàÅ¢1-100ÁÒÒÒÒÒ: ";
    int guess;
    if (!(cin >> guess))
    {
        cout << "Invalid input.\n";
        return 0;
    }

    if (guess == target)
    {
        cout << "¶Ù¡à©Â!\n";
    }
    else
    {
        cout << "äÁè¶Ù¡¨éÒ.àÅ¢·Õè¶Ù¡¤×Í " << target << ".\n";
    }

    return 0;
}
