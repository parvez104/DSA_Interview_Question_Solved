/**

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int i = 1;
    while (i <= n)
    {

        // logic for tringle 1
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        // logic for tringle 2
        int star1 = i - 1;
        while (star1)
        {
            cout << "* ";
            star1--;
        }

        // logic for tringle 3
        int star2 = i - 1;
        while (star2)
        {
            cout << "* ";
            star2--;
        }

        // logic for tringle 4
        int k = n - i + 1;
        while (k)
        {
            cout << k << " ";
            k--;
        }

        cout << endl;
        i++;
    }
}
