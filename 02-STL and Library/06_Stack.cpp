#include<bits/stdc++.h>
using namespace std;

int main(){

    //Last In First Out:

    stack<int> st;

    st.push(1);
    st.push(2);
    st.emplace(23);

    st.empty();
    st.size();

    st.top();
    st.pop();

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}




