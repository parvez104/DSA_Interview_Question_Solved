/**
 * 1
 * 2 1
 * 3 2 1
 * 4 3 2 1
 * 5 4 3 2 1
 */

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
}
