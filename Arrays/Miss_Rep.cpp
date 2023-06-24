#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int xr = 0;

	for(auto it:arr) xr = xr^it;

	for(int i = 1; i<=n; i++) xr = xr^i;

	int rsb = xr & ~(xr-1);

	int zero = 0, one = 0;

	for(auto it:arr){
		if(it&rsb) one = one^it;
		else zero = zero ^ it;
	}

	for(int i = 1; i<=n; i++){
		if(i&rsb) one = one^i;
		else zero = zero ^ i;
	}

	for(auto it:arr){
		if(one==it) return {zero,one};
	}

	return {one,zero};
	
}
