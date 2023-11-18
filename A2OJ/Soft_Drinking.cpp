#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_alcohol = k*l;

    int total_consumption = n*nl;

    int total_round_alcohol = total_alcohol/total_consumption;

    
    
    int total_salt = p;

    int total_salt_consumption = np*n;

    int total_round_salt = total_salt/total_salt_consumption;



    int total_lemon_slices = c*d;

    int total_round_slices = total_lemon_slices/n;


    cout<<min({total_round_alcohol,total_round_salt,total_round_slices})<<endl;

    return 0;
}