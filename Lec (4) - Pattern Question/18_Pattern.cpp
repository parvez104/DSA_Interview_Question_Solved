/**
      1     
    1 2 1   
  1 2 3 2 1 
1 2 3 4 3 2 1 

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
            cout << "  "; //2 space
            space++;
        }

        // logic for tringle 1
        int j = 1;
        while (j <= i)
        {
            cout << j << " "; // 1 space
            j++;
        }

        // logic for tringle 2
        int start = i - 1;
        while ( start)
        {
            cout << start << " ";
            start--;
        }

        cout << endl;
        i++;
    }
}

