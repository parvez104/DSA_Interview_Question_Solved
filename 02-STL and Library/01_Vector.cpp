#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v = {23, 45, 56, 34, 66, 35};
    
    v.push_back(1);

    cout << v[1] << endl;
    cout << v.at(1) << endl; 
    cout << v.size() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;


    v.pop_back();
    v.empty();


    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());


    v.insert(v.begin(), 78);
    v.insert(v.begin()+3, 78);
    v.insert(v.begin(), 3, 78); //Same value multiple time in 1st index
    v.insert(v.begin()+3, 3, 78); //Same value multiple time in any index

     
    v.erase(v.begin() + 2); //delete any index;
    v.erase(v.begin() + 2, v.end()); //multiple deletion


    v.clear();


    vector<int>v1, v2;
    for (int i = 1; i < 10; i++)  v.push_back(i);
    for (int i = 5; i < 20; i = i + 5)  v2.push_back(i);
    swap(v1, v2); 
    

    vector<int>::iterator iter;
    // iter = v.begin();
    iter = v.begin()+3;
    cout<< *iter <<endl;


    for(iter = v.begin(); iter != v.end(); iter++) 
    cout << *iter << " ";

}

