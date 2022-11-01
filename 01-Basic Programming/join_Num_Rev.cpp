#include <iostream>
using namespace std;

int power(int n, int q){

    int pow = 1;
    for (int i = 0; i < q ; i++) pow = pow * n;
    return pow;
}

int revNumber(int arr[], int length){
    
    int ans = 0;
    for (int i = 0 ; i < length ; i++){ 
        ans = arr[i] * (power(10,i)) + ans;
    }
    return ans;
}

int main(){
    int num[5] = {1, 2, 3, 4, 5};
    cout << revNumber(num, 5) << endl;
}
