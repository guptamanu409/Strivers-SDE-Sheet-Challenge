#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x) {
	// Write your code here

	//int n = arr.size();
	int l = 0, r = n-1;
	int ans = n;

	int mid = l+ ((r-l)>>1);

	while(l<=r){
		if(arr[mid]>=x){
			ans = mid;
			r = mid -1;
		}

		else l = mid + 1;

		mid = l + ((r-l)>>1);
	}

	return ans;

}
