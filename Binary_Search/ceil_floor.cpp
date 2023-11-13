#include<bits/stdc++.h>
using namespace std;

int fl(int a[], int n, int x){
	int ans = -1;
	int l = 0, r = n-1;
	int mid = l + ((r-l)>>1);

	while(l<=r){
		if(a[mid]<x){
			ans = a[mid];
			l = mid + 1;
		}

		else r = mid - 1;
		mid = l + ((r-l)>>1);
	}

	return ans;
}

int lb(int a[], int n, int x){
	int ans = n;
	int l = 0, r = n-1;
	int mid = l + ((r-l)>>1);

	while(l<=r){
		if(a[mid]==x) return x;

		else if(a[mid]>x){
			ans = a[mid];
			r = mid - 1;
		}

		else l = mid + 1;
		mid = l+((r-l)>>1);
	}

	return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.

	sort(arr,arr+n);

	int ceil = lb(arr,n,x);
	if(ceil==n) ceil = -1;
	else if(ceil==x) return make_pair(x,x);

	int floor = fl(arr,n,x);
	return make_pair(floor,ceil);


}
