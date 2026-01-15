//https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
#include <bits/stdc++.h>
using namespace std;
vector<int> getMinMax(vector<int> &arr) {
        int n=arr.size(),min_element=INT_MAX,max_element=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max_element) max_element=arr[i];
            if(arr[i]<min_element) min_element=arr[i];
        }
        return {min_element, max_element};
}
int main(){
    vector<int>arr={1,4,3,5,6,8};
    vector<int>arr1={12, 3, 15, 7, 9};
    for(auto x:getMinMax(arr)){
        cout << x << " ";
    }
    cout<<endl;
    for(auto x:getMinMax(arr1)) cout << x << " ";
    return 0;
}