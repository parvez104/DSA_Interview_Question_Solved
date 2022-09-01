/**
      1
    2 2
  3 3 3
4 4 4 4

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    int i = 1;
    while (i <= n)
    {
        // logic of space
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }

        // logic for tringle of star
        int j = 1;
        while (j <= i)
        {
            cout << i;
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

