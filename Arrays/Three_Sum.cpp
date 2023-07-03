#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
	vector<vector<int>>ans;
	if(n<=2) return ans;
	
	sort(arr.begin(),arr.end());
	
	int i = 0;
	while(i<n){
		int j = i+1;
		int k = n-1;
		while(j<k){
			if(arr[i]+arr[j]+arr[k]==K){
				ans.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
				while(j<k && arr[j-1]==arr[j])j++;
				while(j<k && arr[k+1]==arr[k])k--;
			}
			else if(arr[i]+arr[j]+arr[k]<K) j++;
			else k--;
		}
		i++;
		while(i<n && arr[i-1]==arr[i])i++;
	}
	return ans;
	//return (ans.empty())? {{-1}} : ans;
	


	//Using Sort + Hashing
	// vector<vector<int>>ans;
	// int i = 0;
	// while(i<n){
	// 	if(i!=0){
	// 		while(i<n && arr[i-1]==arr[i])i++;
	// 	}
	// 	unordered_set<int>mp;
	// 	int j = i+1;
	// 	while(j<n){
	// 		int key = K-(arr[i]+arr[j]);
	// 		if(mp.find(key)!=mp.end()){
	// 			mp.insert(arr[j]);
	// 			ans.push_back({arr[i],key,arr[j]});
	// 			j++;
	// 			while(j<n && arr[j-1]==arr[j])j++;

	// 		}
	// 		else mp.insert(arr[j++]);
	// 	}
	// 	i++;
	// }
	// return ans;
}