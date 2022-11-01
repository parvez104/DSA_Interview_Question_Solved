#include<bits/stdc++.h>
using namespace std;

int main(){

    //Same As Vector Countainer:

    deque<int>dq;

    dq.push_back(1);
    dq.push_back(2);

    dq.at(1);
    dq.size(); 

    dq.pop_front(); 
    dq.pop_back(); 

    dq.front();
    dq.back();

    dq.clear();
    dq.empty();


    //Delete single value:
    deque<int> ::iterator value;
    value = dq.begin() + 2;
    dq.erase(value);
    

    //Delete multiple value's:
    deque<int> ::iterator point1, point2;
    point1 = dq.begin();
    point2 = dq.begin() + 3;
    dq.erase(point1, point2);


    //Insert:
    deque<int> ::iterator value;
    value = dq.begin() + 2;
    dq.insert(value, 16);
    dq.insert(value, 3, 16);

}

