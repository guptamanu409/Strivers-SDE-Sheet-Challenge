#include<bits/stdc++.h>
using namespace std;


int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	return lower_bound(arr.begin(),arr.end(),m) - arr.begin();
}
