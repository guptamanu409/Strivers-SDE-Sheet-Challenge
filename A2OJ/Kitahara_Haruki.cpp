#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int fo = 0, ft = 0;
    int os = 0, ts = 0;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(x==100){
            fo++;
            os+=100;
        }

        else{
            ft++;
            ts+=200;
        }
    }

    // cout<<fo<<" "<<os<<endl;
    // cout<<ft<<" "<<ts<<endl;

    if(n==1) cout<<"NO";
    else if(fo!=0 && ft==0){
        if(fo&1) cout<<"NO";
        else cout<<"YES";
    }
    else if(ft!=0 && fo==0){
        if(ft&1) cout<<"NO";
        else cout<<"YES";
    }
    else if(ft==fo && n>2) cout<<"YES";
    else if(fo>ft && (ts-os)==0) cout<<"YES";
    else {
        int sum = os+ts;
        int th = (ts!=200)? ts/2 : 200;
        int oh = os/2;
        int bas = (int)(log10(oh) + 1);
        if(bas<=2){
            cout<<"NO";
            return 0;
        }
        if(bas==3){
            int ooh = oh;
            int zero = 0;
            while(ooh){
                if(ooh%10==0)zero++;
                ooh = ooh/10;
            }
            if(zero<2){
                cout<<"NO";
                return 0;
            }
            
        }

        if(bas==4){
            int ooh = oh;
            int zero = 0;
            while(ooh){
                if(ooh%10==0)zero++;
                ooh = ooh/10;
            }
            if(zero<2){
                cout<<"NO";
                return 0;
            }
            
        }
        int half  = th + oh;
        if(half==(sum/2)) cout<<"YES";
        else cout<<"NO";
    }


    return 0;
}