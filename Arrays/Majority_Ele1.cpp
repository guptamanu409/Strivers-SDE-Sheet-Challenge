#include <bits/stdc++.h>
using namespace std;


int findMajorityElement(int arr[], int n) {
	
	if(n==1) return arr[0]; //Cross check

	//Using Moore's Voting Algo

	int cnt = 1;
	int ele = arr[0];
	
	for(int i = 1; i<n; i++){
		if(cnt==0){
			ele = arr[i];
			cnt = 1;
		}

		else if(ele==arr[i]){
			cnt++;
			if(cnt>n/2) return ele;
		}

		else cnt--;
	}

	cnt = 0;

	for(int i = 0; i<n; i++){
		if(ele==arr[i]) cnt++;
	}

	return (cnt>n/2)? ele : -1;
}