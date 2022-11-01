#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n){
        
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans << endl;
}

