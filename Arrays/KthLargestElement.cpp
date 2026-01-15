#include<bits/stdc++.h>
using namespace std;
/*https://leetcode.com/problems/kth-largest-element-in-an-array/*/
int findKthLargest(vector<int>& nums, int k) {
    /*how to create a min-heap*/
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
    vector<int> nums={3,2,3,1,2,4,5,5,6};
    int k=4;
    cout << findKthLargest(nums,k) << endl;
    return 0;
}