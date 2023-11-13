#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	

	int s = arr.size();

	if(s==1) return arr[0];

	// for(int i = 0; i<s; i++){
	// 	int index = (arr[i]<0)? arr[i]*-1: arr[i];

	// 	if(arr[index-1]<0) return index;
	// 	arr[index-1]*=-1;
	// }
	// return -1;

	int slow = arr[0];
	int fast = arr[0];

	do{
		slow = arr[slow];
		fast = arr[arr[fast]];
	}while(slow!=fast);

	slow = arr[0];

	while(slow!=fast){
		slow = arr[slow];
		fast = arr[fast];
	}

	return slow;
}
