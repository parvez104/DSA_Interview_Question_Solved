
#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_set<int> ranNum = {3, 8, 4, 4, 0, 9, 4}; // hashtable

    // insert()
    // begin(), end()

    // count()
    // find()

    // clear()
    // erase()

    // size()
    // operator ' = '

    // swap()
    // empty()

    // bucket_count() // print how many backet.
    cout << ranNum.bucket_count() << endl;

    // bucket() // where is the value exist on the backet.
    cout << ranNum.bucket(4) << endl; 

    // bucket_size() // how many value exist on the backet.
    cout << ranNum.bucket_size(4) << endl; 

    for(auto value: ranNum) cout << value << " ";

}

  