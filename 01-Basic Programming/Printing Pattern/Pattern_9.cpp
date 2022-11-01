/**
 * A B C
 * B C D
 * C D E
 */

#include <iostream>
using namespace std;
int main()
{

    int n = 3;

    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + i - 1;

        int j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

