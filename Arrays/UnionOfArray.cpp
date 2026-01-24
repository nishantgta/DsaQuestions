/*https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1*/
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    unordered_set<int> s;
    for(auto x:a) s.insert(x);
    for(auto x:b) s.insert(x);
    vector <int> ans;
    for(auto x:s){
        ans.push_back(x);
    }
    return ans;
}

int main(){
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};
    vector<int> ans = findUnion(a,b);
    for(auto x:ans){
        cout << x << " ";
    } 
    cout << endl;
    return 0;
}
