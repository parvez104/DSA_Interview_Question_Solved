#include <iostream>
#include <math.h>
using namespace std;

int power(int n, int q){

    int pow = 1;
    for (int i = 0; i < q ; i++) pow = pow * n;
    return pow;
}

int main(){

    int n, q;
    cout << "Enter Power 'N' of 'I' : ";
    cin >> n >> q;

    cout << power(n, q) << endl;

}

