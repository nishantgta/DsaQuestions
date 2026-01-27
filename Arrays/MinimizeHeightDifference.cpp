// https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1
#include<bits/stdc++.h>
using namespace std;

int getMinDiff(vector<int> &a, int k) {
    sort(a.begin(),a.end()); int n=a.size();
    int ans=a[n-1]-a[0];
    for(int i=1;i<n;i++){
        if(a[i]-k<0) continue;
        int minH=min(a[0]+k,a[i]-k);
        int maxH=max(a[n-1]-k,a[i-1]+k);
        ans=min(ans,maxH-minH);
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 9, 12, 16, 20};
    int k=3;
    cout << getMinDiff(arr,k) << endl;
    return 0;
}
