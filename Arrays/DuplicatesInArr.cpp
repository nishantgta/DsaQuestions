// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& arr) {
    int n=arr.size();
    for(int i=0;i<n;i++) arr[i]--;
    for(int i=0;i<n;i++){
        int index=arr[i]%n;
        arr[index]+=n;
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/n;
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]>1){
            ans.push_back(i+1);
        }
    }
    return ans;
}

int main() {
    vector <int> arr={2, 3, 1, 2, 3};
    vector<int> ans=findDuplicates(arr);
    for(auto x:ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
