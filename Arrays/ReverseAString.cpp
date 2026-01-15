/*question link=https://leetcode.com/problems/reverse-string/description/*/
#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char>&s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        char ch=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=ch;
    }
}
int main(){
    vector<char>s={'h','e','l','l','o'};
    vector<char>s1={'H','a','n','n','a','h'};
    reverseString(s);
    reverseString(s1);
    for(auto x:s){
        cout << x << " ";
    }
    cout<<endl;
    for(auto x:s1) cout << x << " ";
    return 0;
}