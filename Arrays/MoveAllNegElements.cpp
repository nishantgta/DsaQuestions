//https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
#include <bits/stdc++.h>
using namespace std;
void segregateElements(vector<int>& arr) {
    int n=arr.size();
    vector<int>pos; vector<int>neg;
    for(auto x:arr){
        if(x>=0) pos.push_back(x);
        if(x<0) neg.push_back(x);
    }
    int i=0;
    for(i=0;i<pos.size();i++){
        arr[i]=pos[i];
    }
    for(int j=0;j<neg.size();j++){
        arr[i]=neg[j];
        i++;
    }
} 

int main() {
    vector <int> arr = {1, -1, 3, 2, -7, -5, 11, 6};
    segregateElements(arr);
    for(auto x:arr){
        cout << x << " ";
    }
    return 0;
}
