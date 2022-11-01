#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 10;
    cout << n << endl;

    //Address of operator:
    int *ptr_of_n = &n;
    cout << ptr_of_n << endl;
    cout << *ptr_of_n << endl;

    //Note: Any data type pointer reserve 4 byte memory, on my mechine:

    char ch = 'a';
    char *ptr_of_ch = &ch;

    cout << sizeof(ptr_of_ch ) << endl;
    cout << sizeof(ptr_of_n ) << endl;

    //Note: int *ptr;  //this is not allow and it's very riscky:

    int num = 5;
    int  a = num; 
    cout << "before = " << num << endl;
    a++;
    cout << "after = " << num << endl; 


    int *p = &num; 
    cout << "before = " << num << endl; 
    (*p)++;
    cout << "after = " << num << endl; 


    //Copying Pointer: 
    int *q = p;

    //Important Concepts: 
    int i = 3;    
    int *t = &i;
    *t = *t + 1;
    cout << "before = " << t << endl;
    t = t + 1; // 1step forword int address
    cout << "after = " << t << endl;    
}
