#include <iostream>
#include <math.h>
using namespace std;

int chaekEvenOdd(int n){
    if( n & 1) return 1;
    return 0;
}


int main(){

    int n;
    cout << "Enter Number : ";
    cin >> n;

    if(chaekEvenOdd(n)){
        cout << "Odd" << endl;
    }else{
        cout << "Even" << endl;
    }
}
