// https://leetcode.com/problems/jump-game-ii/description/
#include <bits/stdc++.h>
using namespace std;

int solve_dp(vector<int> &nums,int i,int n, vector<int> &dp){
      if(i==n-1) return 0;
      if(i>=n) return 500000;
      int ans=500000;
      if(dp[i]!=500000) return dp[i];
      for(int j=1;j<=nums[i];j++){
          ans=min(ans,1+solve_dp(nums,i+j,n,dp));
      }
      dp[i]=ans;
      return dp[i];
  }

  int jump(vector<int>& nums) {
      vector<int> dp(nums.size(),500000);
      int ans=solve_dp(nums,0,nums.size(),dp);
      if(ans>=500000){
          return -1;
      }
      return ans;
  }

int main(){
  vector<int> nums={2,3,1,1,4};
  cout << jump(nums) << endl;
  return 0;
}
