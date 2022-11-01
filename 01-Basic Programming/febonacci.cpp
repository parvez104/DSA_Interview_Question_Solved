#include <iostream>
#include <math.h>
using namespace std;

int febonacci(int n){
   
   int a = 0;
   int b = 1;
   cout << a << " " << b << " ";

   for (int i = 2; i < n; i++){
      int feb = a + b;
      a = b;
      b = feb;
      cout << feb << " ";
   }
}


int main(){

    int n;
    cout << "Enter Number : ";
    cin >> n;
    febonacci(n);
}
