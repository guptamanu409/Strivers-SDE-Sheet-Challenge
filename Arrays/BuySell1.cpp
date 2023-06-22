#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxi = 0;
    int mini = prices[0];

    for(int i = 1; i<prices.size(); i++){
        maxi = (prices[i]-mini>maxi) ? prices[i]-mini : maxi;
        mini = (prices[i]<mini)? prices[i] : mini;
    }

    return maxi;

}