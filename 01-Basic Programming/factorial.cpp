#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n){
 
    int fact = 1;
    for(int i = 1; i <= n; i++) fact *= i;
    return fact;
}


int main(){

    int n;
    cout << "Enter Number : ";
    cin >> n;

    cout << factorial(n) << endl;
}
