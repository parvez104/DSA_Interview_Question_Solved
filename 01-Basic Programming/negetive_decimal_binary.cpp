#include <iostream>
#include <math.h>
using namespace std;

int power(int n, int q){

    int pow = 1;
    for (int i = 0; i < q ; i++) pow = pow * n;
    return pow;
}

int main(){

    long long int n = -3;
    unsigned long long int i = 0, ans = 0;

    if( n < 0) n = pow(2,16) + n;
    
    cout << n << endl;

    while (n){

        int bit = n & 1;
        ans = (bit * power(10, i)) + ans;

        n = n >> 1;
        i++;
        cout << ans << endl;
    }
    cout << ans << endl;
}


//not enough memory, but logic is ok.
