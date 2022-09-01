/**
 * *
 * * *
 * * * *
 * * * * *
 *
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 *
 * 1
 * 2 2
 * 3 3 3
 * 4 4 4 4
 */

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            // cout<< " * ";
            // cout<< j << " ";
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}