#include<bits/stdc++.h>
using namespace std;
bool matching(char a,char b){
    if(a=='('&& b==')' || a=='['&& b==']' || a=='{'&& b=='}') return true;
    else 
        return false;
}
bool validPar(string &str)
{
    stack<char> st;
    for(char x:str){
        if(x =='(' || x =='[' || x =='{')
            st.push(x);
        else{
            if(st.empty())
                return false;
            if(!matching(st.top(),x))
                return false;
            else
                st.pop();
        }
    }
    return (st.empty()==true);
}
int main()
{
    string str="{()}";
    cout<<validPar(str);
    return 0;
}