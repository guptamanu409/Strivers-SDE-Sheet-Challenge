#include <bits/stdc++.h>

// void helper(vector<vector<long long>>&v, int n){

//   for(int i = 3; i<=n; i++){
//     int j = 0;
//     int count = 1;
//     vector<long long>temp;
//     while(count++<=i-1){
//       if(j!=0){
//         temp.push_back(v[i-2][j]+v[i-2][j-1]);
//       }
//       else temp.push_back(1);
//       j++;
//     }
//     temp.push_back(1);
//     v.push_back(temp);
//   }

// }

vector<long long> helper(int row){
  vector<long long>temp;
  temp.push_back(1);
  long long prev = 1;
  for(int i = 1; i<row; i++){
    prev = (long long)(prev*(row-i));
    prev = prev/i;
    temp.push_back(prev);
  }
  return temp;
}


vector<vector<long long int>> printPascal(int n) 
{
  if(n==1) return {{1}};

  vector<vector<long long>>ans;

  for(int i = 1; i<=n; i++){
    ans.push_back(helper(i));
  }
  return ans;

  //Brute Force - Using Extra Space
  // vector<vector<long long>>v = {
  //   {1},
  //   {1,1}
  // };

  // if(n==2) return v;
  // helper(v,n);
  // return v;
}
