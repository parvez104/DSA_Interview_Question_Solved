#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int i = 0, decimal = 0;

    while(n != 0){

        int digit = n % 10;

        if(digit == 1){
            decimal = decimal + pow(2, i);
        }
        i++;

        n /= 10;
    }
    cout << decimal << endl;
}

