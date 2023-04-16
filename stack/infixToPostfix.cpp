#include<bits/stdc++.h>
using namespace std;
bool isdig(char c)
{
    if(c=='1' || c=='2' || c=='3' || c=='4' ||c=='5' ||c=='6' ||c=='7' ||c=='8' ||c=='9')
    return true;
    else 
    return false;
}
string InfixToPost(string s)
{
    string ans="";
    stack<char> st;
    //map to compare precedence
    unordered_map<char,int> prece;
    prece['+']=1;
    prece['-']=1;
    prece['*']=2;
    prece['/']=2;
    prece['^']=3;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]) || isdig(s[i]))   ans+=s[i];
        
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')')
            {
                while(!st.empty() &&  st.top()!='(')
                {    
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }
        else
        {
            while(!st.empty() && prece[s[i]]<=prece[st.top()])
            {
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string exp = "h^m^q^(7-4)";
    cout<<InfixToPost(exp);
    return 0;
}