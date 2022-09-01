/**
 * A A A
 * B B B
 * C C C
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    char alphabet = 'A';

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << alphabet;
            j++;
        }
        cout << endl;
        alphabet++;
        i++;
    }
}
