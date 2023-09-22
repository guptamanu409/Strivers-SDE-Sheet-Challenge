#include <bits/stdc++.h>
using namespace std;
int modularExponentiation(int xx, int n, int m) {
	// Write your code here.
	long long ans = 1;
	long long x = xx;
	while(n>0){
		if(n&1){
			ans = ((ans)%m*(x)%m)%m;
			// --n;
		}

		x = ((x)%m*(x)%m)%m;
		n = n>>1;

		// else{
		// 	x = x*x;
		// 	n = n>>1;
		// }
	}

	return (int)ans%m;
}