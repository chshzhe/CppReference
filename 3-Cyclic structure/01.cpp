#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int power[] = {0, 1, 8, 27, 64, 125, 216, 343, 512, 729};
    bool notFirst = false;
    // Obviously, the number taht bigger than 2999 can't be so-called 'X number'.
    // This means we just need to enumerate the 4 bits
    for (int thousand = 0; thousand <= 3; thousand++)
        for (int hundred = 0; hundred <= 9; hundred++)
            for (int tens = 0; tens <= 9; tens++)
                for (int unit = 0; unit <= 9; unit++)
                {
                    int current = 1000 * thousand + 100 * hundred + 10 * tens + unit;
                    if (current >= a && current <= b && power[thousand] + power[hundred] + power[tens] + power[unit] == current)
                        if (notFirst)
                            cout << ' ' << current;
                        else
                        {
                            cout << current;
                            notFirst = true;
                        }
                }
    if (!notFirst)
        cout << "no";

    cout << endl;
    return 0;
}