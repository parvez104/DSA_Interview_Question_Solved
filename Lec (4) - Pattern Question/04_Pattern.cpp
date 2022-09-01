/**
 * 1
 * 2 3
 * 3 4 5
 * 4 5 6 7
 */

#include <iostream>
using namespace std;
int main()
{
    int n = 10;

    int i = 1;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count << "\t";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
