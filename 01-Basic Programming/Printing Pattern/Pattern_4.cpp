/*
01 
02 03 
03 04 05       
04 05 06 07    
05 06 07 08 09 
06 07 08 09 10 11 
07 08 09 10 11 12 13 
08 09 10 11 12 13 14 15    
09 10 11 12 13 14 15 16 17 
10 11 12 13 14 15 16 17 18 19
*/

#include <iostream>
using namespace std;

int main(){
    int n = 10;

    int i = 1;
    while (i <= n)
    {
        int count = i;
        int j = 1;

        while (j <= i){

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

