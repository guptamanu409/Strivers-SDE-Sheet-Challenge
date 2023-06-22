#include <bits/stdc++.h> 
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long maxi = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        sum = (sum <= 0) ? 0 : sum;
    }
    return maxi;
    
}