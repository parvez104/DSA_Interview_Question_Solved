#include <iostream>
#include <math.h>
using namespace std;

int ComplimentBase10(int n){

    if (n == 0) return 1;
    long long x = 1;

    while(x <= n){
        
        n = n ^ x;
        x = x << 1; 
    }
    return n;
}


int main(){
    
    int n = 10;
    cout << ComplimentBase10(n) << endl;
}   

