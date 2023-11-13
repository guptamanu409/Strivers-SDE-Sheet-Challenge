#include<bits/stdc++.h>
using namespace std;

int up(vector<int>&a, int n, int k){
    int ans = n;
    int l = 0, r = n-1;
    int mid = l + ((r-l)>>1);

    while(l<=r){
        if(a[mid]>k){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
        mid = l + ((r-l)>>1);
    }
    return ans;
}

int lb(vector<int>&a, int n , int k){
    int ans = n;
    int l = 0, r = n-1;
    int mid = l + ((r-l)>>1);

    while(l<=r){
        if(a[mid]>=k){
            ans = mid;
            r = mid - 1;
        }

        else l = mid + 1;
        mid = l + ((r-l)>>1);
    }

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first = lb(arr,n,k);
    if(first==n || arr[first]!=k) return make_pair(-1,-1);

    int last = up(arr,n,k) - 1;
    return make_pair(first,last);


}
