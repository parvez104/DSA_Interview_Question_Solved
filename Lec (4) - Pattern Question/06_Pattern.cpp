/**
 * 9 8 7
 * 6 5 4
 * 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 3, start = 9; 

    int i = 1; 
    while( i <= n){

        int j = 1;
        while( j <= n){
            cout << start << " ";
            start--;
            j++;
        }
        cout<<endl;
        i++;
    }
}
