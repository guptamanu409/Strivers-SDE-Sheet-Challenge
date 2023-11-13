#include<bits/stdc++.h>
using namespace std;

int ub(vector<int>&a, int n, int x){
	int ans = n;
	int l = 0, r = n-1;
	int mid = l + ((r-l)>>1);
	while(l<=r){
		if(a[mid]>x){
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
		mid = l + ((r-l)>>1);
	}
	return ans;
}

int lb(vector<int>&a, int n, int x){
	int ans = n;
	int l = 0, r = n-1;
	int mid = l + ((r-l)>>1);
	while(l<=r){
		if(a[mid]>=x){
			ans = mid;
			r = mid - 1;
		}

		else l = mid + 1;
		mid = l + ((r-l)>>1);
	}
	return ans;
}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int first = lb(arr,n,x);

	if(first==n || arr[first]!=x) return 0;

	int last = ub(arr,n,x);
	return last - first;
}
