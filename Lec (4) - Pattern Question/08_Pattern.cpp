/**
 * A B C
 * A B C
 * A B C
 */

#include <iostream>
using namespace std;
int main()
{

    int n = 3;

    int i = 1;
    while (i <= n)
    {

        int j = 1;
        char alphabet = 'A';
        while (j <= n)
        {
            cout << alphabet;
            alphabet++;
            j++;
        }
        cout << endl;
        i++;
    }
}
