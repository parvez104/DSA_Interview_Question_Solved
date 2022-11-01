#include <iostream>
using namespace std;

// int joinNumber(int arr[], int n){
//     int number = 0;
//     for (int i = 0; i < n; i++) number = (number * 10) + arr[i];
//     return number;
// }

int joinNumber(int* arr, int n){

    int number = 0;
    for(int i = 0; i < 6; i++){
        number = (number * 10 ) + arr[i];
    }
    return number;
}


int main(){
    int arr[6] = {8 ,1, 2, 3, 4, 5};
    int number = joinNumber(arr, 6);
    cout << number<< endl;
}
