/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

% % % % %
% % % % %
% % % % %
% % % % %
*/

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {

            // cout<< j << " ";
            cout << n - j + 1 << " ";
            // cout<< " * ";

            j++;
        }
        cout << endl;
        i++;
    }
}


