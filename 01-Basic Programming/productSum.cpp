#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int s = 0, p = 1;
        while(n){
            s += (n % 10);
            p *= (n % 10);
            n /= 10;
        }
        return p - s;
    }
};

int main(){
   Solution subtract;
   int ans = subtract.subtractProductAndSum(234);
   cout << ans << endl;
}

