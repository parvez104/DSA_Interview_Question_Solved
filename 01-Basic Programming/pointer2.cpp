#include <iostream>
#include <math.h>
using namespace std;

int main(){

    // Pointer in array 💦 :

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << &arr << endl;
    cout << arr << endl;
    cout << &arr[0] << endl;
    
    cout << *arr << endl;
    cout << *arr+25 << endl;   // 1st loction+25
    cout << (*arr)+15 << endl; // 1st loction+25
    cout << *(arr+5) << endl;  // 6th location value
    
    int *pt = arr;

    for (int i = 0; i < 10; i++) {

        // cout << *(arr + i) << " "; 
        // cout << *(i + arr) << " "; 
        // cout << i[arr] << " "; 
        // cout << pt + i << " : "; 
        // cout << *pt + i << ", "; 
    }


    int a[5] = {45,65,67,45,45};
    char ch[6] = "abcde";

    cout << a << endl; // base-address
    cout << ch << endl; // print-full-array

    char *c = &ch[0];
    cout << c << endl; // print-full-array

    // diffrent between char array
    char temp = 'z';
    char *char_ptr = &temp;
    cout << char_ptr << endl;

    int num = 10;
    int *numPtr = &num;
    int **numPtrPtr = &numPtr;

    cout << &num << endl;
    cout << numPtr << endl;
    cout << *numPtrPtr << endl;

    cout << num << endl;
    cout << *numPtr << endl;
    cout << **numPtrPtr << endl;
}

//Practice :-> Go codeStudio/guide-path/pointer
