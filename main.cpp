#include <iostream>
using namespace std;
int main()
{
    int pin{};
    int tries = 0;
    cout << "please enter your pin number" << endl;
    while (pin != 1234)
    {
        cout << "Enter your pin: ";
        cin >> pin;
        tries++;
        if (tries == 3)
        {
            cout << " you've tried " << tries << " wait for another 5 minutes!" << endl;
            break;
        }
    }
    if (pin == 1234)
    {
        cout << "PIN accepted!\n";
    }
}