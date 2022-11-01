/*
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
G G G G G G G 
H H H H H H H H
*/

#include <iostream>
using namespace std;
int main()
{

    int n = 13;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = ('A' + i - 1);
            cout << ch <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}
