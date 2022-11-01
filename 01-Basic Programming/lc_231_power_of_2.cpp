
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

bool powOfTwo(int n){

    int ans = 1;

    for (int i = 0; i <= 30; i++){
        
        if(ans == n) 
            return true;
        if(ans < INT_MAX / 2) 
            ans *= 2;
    }
    return false;
}

int main(){
    int num = 63;
    cout << powOfTwo(num) << endl;
}
