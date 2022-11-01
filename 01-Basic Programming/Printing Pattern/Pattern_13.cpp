/*
Z 
Y Z 
X Y Z         
W X Y Z       
V W X Y Z     
U V W X Y Z   
T U V W X Y Z 
S T U V W X Y Z   
R S T U V W X Y Z 
Q R S T U V W X Y Z   
*/
#include <iostream>
using namespace std;

int main(){

    int n = 26;

    int i = 1;
    while (i <= n)
    {
        char ch = 'A' + n - i;

        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
