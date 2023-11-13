#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	
	int i = 0;
	int j = 0;
	while(j<n){
		if(arr[j]!=arr[i]){
			i++;
			//swap(arr[i],arr[j]);
			arr[i]=arr[j];
		}
		j++;
	}
	return i+1;
}