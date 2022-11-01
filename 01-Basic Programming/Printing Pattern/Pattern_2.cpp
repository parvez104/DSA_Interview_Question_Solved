/*
01 02 03 04 
05 06 07 08 
09 10 11 12 
13 14 15 16 
*/

#include <iostream>
using namespace std;

void pattern(int n){
  
  int i = 1;
  int count = 1;

  while (i <= n){

    int j = 1;
    while (j <= n){

      if (9 >= count){
        cout << "0" << count << " ";
      }else{
        cout << count << " ";
      }

      count++;
      j++;
    }

    cout << endl;
    i++;
  }
}


int main(){

  int n = 4;
  pattern(n);

  return 0;
}
