
#include <iostream>
#include<climits>
#include <math.h>
using namespace std;

/*
int reverseNumebr(int num){

    int rev = 0;
    while (num){

        int digit = num % 10;
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    cout << rev;
}
*/

int reverseNumebr(int num){

    long long rev = 0;

    while (num){

        int digit = num % 10;

        if (rev > INT_MAX || rev < INT_MIN) return 0;
            
        rev = (rev * 10) + digit;

        num = num / 10;
    }
    cout << rev;
}

int main(){

    int number;
    cin >> number;
    reverseNumebr(number);
}

