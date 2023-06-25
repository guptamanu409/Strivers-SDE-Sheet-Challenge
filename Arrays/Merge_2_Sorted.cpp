#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
	//int i = arr1.size() - 1;
	//int total = arr1.size();
	int i = m+n-1;
	int j = n-1;

	while(i>=0 && j>=0){
		if(arr1[i]==0){
			swap(arr1[i],arr2[j]);
			i--;
			j--;
		}
		else break;
	}

	int gap = ((m+n)/2)+((m+n)%2);

	while(gap>0){
		i = 0;
		j = i+gap;
		while(j<(m+n)){
			if(arr1[i]>arr1[j]){
				swap(arr1[i],arr1[j]);
			}
			i++;
			j++;
		}
		gap = (gap==1)? 0 : gap/2 + gap%2;
	}

	return arr1;



	// int start = INT_MAX;
	// for(int i = 0; i<m; i++){
	// 	for(int j = 0; j<n; j++){
			

	// 		// if(arr1[i]==0){
	// 		// 	while(i<m && j<n){
	// 		// 		arr1[i] = arr2[j];
	// 		// 		i++;
	// 		// 		j++;
	// 		// 	}
	// 		// 	break;
	// 		// }
	
	// 		if(arr1[i]==0){
	// 			start = min(start,i);
	// 			break;
	// 		}

	// 		if(arr1[i]<=arr2[j]) break;
			
	// 		else{
	// 			swap(arr1[i],arr2[j]);
	// 			int count = 0;
	// 			sort(arr2.begin(),arr2.end());
	// 			//int j2 = j+1;
	// 			// while(j2<n){
	// 			// 	if(arr2[j2]<arr2[j]) count++;
	// 			// 	j2++;
	// 			// }
	// 			// int temp = arr2[j];
	// 			// while(count--){
	// 			// 	arr2[j] = arr2[j+1];
	// 			// 	j++;
	// 			// }
	// 			// arr2[j] = temp;
				
	// 			break;
	// 		}		
	// 	}
	// 	int f = start;
	// 	int s = 0;
		
	// 	while(f<m && s<n){
	// 		arr1[f] = arr2[s];
	// 		f++;
	// 		s++;
	// 	}	
		
	// }

	// return arr1;
}