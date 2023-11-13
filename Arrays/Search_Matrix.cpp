#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
    
    int row = mat.size();
    int col = mat[0].size();
    int te = row*col;

    int low = 0;
    int high = te-1;

    int mid = low+((high-low)>>1);

    int r = mid/col;
    int c = mid%col;

    while(low<=high){
        if(mat[r][c]==target) return true;

        if(mat[r][c]<target) low = mid+1;
        else high = mid-1;

        mid = low+((high-low)>>1);

        r = mid/col;
        c = mid%col;
    }

    return false;
}

int main(){

    ios::sync_with_stdio(false); // Removes the sync between printf and cout

    cin.tie(NULL); //Removes the sync between cin and cout

    return 0;
}