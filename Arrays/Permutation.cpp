#include <bits/stdc++.h> 
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    if(n==1) return permutation;

    //return (next_permutation(permutation.begin(),permutation.end()))? permutation:permutation;

    int perI = -1;
    
    for(int i = n-2 ; i>=0; i--){
        if(permutation[i]<permutation[i+1]){
            perI = i;
            break;
        }
    }

    if(perI == -1){
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }

    for(int i = n-1; i>perI; i--){
        if(permutation[i]>permutation[perI]){
            swap(permutation[i],permutation[perI]);
            break;
        }
    }

    reverse(permutation.begin()+perI+1,permutation.end());
    return permutation;
}