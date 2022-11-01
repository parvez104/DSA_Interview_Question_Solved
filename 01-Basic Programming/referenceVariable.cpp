#include <iostream>
#include <math.h>
using namespace std;

void update1(int n){ //pass by value
    n++;
}

void update2(int& n){ //pass by reference
    n++;
}

int* fun1(int n){
    int *ptr = &n;
    return ptr; //error or warrning. cause it is local variable, lifetime only in this function.
}

int& fun2(int n){
    int num = n;
    int &ans = num;
    return ans; //error or warrning. cause it is local variable, lifetime only in this function.
}


int main(){

    int n = 5;
    int &i = n;

    cout << n << endl;
    n++;
    cout << n << endl;
    i++;
    cout << n << endl;

    update1(n);
    update2(n);

    fun1(n);
    fun2(n);
}
