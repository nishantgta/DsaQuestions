// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int a[], int n){
    int curr_max=a[0], global_max=a[0];   
    for(int i=1;i<n;i++){
        curr_max=max(curr_max+a[i],a[i]);
        global_max=max(curr_max,global_max);
    } 
    return global_max;    
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int arr2[]={-2, -4};
    cout << maxSubarraySum(arr, 7);
    cout << endl;
    cout << maxSubarraySum(arr2, 2);
    return 0;
}
