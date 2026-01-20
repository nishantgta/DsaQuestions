#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int c1=0,c0=0,c2=0,n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==0) c0++;
        if(nums[i]==1) c1++;
        if(nums[i]==2) c2++;
    }
    int i=0;
    while(c0){nums[i]=0; i++; c0--;}
    while(c1){nums[i]=1; i++; c1--;}
    while(c2){nums[i]=2; i++; c2--;}
}

int main() {
    vector <int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(auto x:nums){cout << x << " ";}
    cout << endl;
    return 0;
}