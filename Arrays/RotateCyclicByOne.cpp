//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr) {
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        swap(arr[i],arr[n-1]);
    }
}

int main() {
    vector <int> arr = {1, 2, 3, 4, 5};
    vector <int> arr2={9, 8, 7, 6, 4, 2, 1, 3};
    rotate(arr);
    for(auto x: arr){
        cout << x << " ";
    }
    cout << endl;
    rotate(arr2);
    for(auto x: arr2){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
