#include<bits/stdc++.h>
using namespace std;
//str contains only lowercase letters
bool isAnagram(string s1,string s2)
{
    int count[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]-'a']++;
        count[s2[i]-'a']--;
    }
    for(int j=0;j<26;j++)
        if(count[j]!=0)
            return false;
    return true;
}
int main()
{
    return 0;
}