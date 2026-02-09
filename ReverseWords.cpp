#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="you.love.i";
    string res;
    stack<string> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='.')
        {
            res+=s[i];
        }
        else{
            st.push(res);
            res="";
        }
    }
    st.push(res);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
        if(!st.empty()){
            cout<<'.';
        }
    }
    return 0;
}