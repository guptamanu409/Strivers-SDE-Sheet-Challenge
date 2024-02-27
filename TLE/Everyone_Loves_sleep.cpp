#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;


    while(t--){

        int n, h, m;
        bool check = false;
        cin>>n>>h>>m;
        multiset<pair<int,int>>st;
        while(n--){
            int x,y;
            cin>>x>>y;

            if(x==h && y==m){
                //cout<<0<<" "<<0<<'\n';
                st.insert({0,0});
                check = true;
                // break;
            }
            else if(x>=h){
                if(y>=m){
                    x = x-h;
                    y = y-m;
                    st.insert({x,y});
                }
                else if(x>h && y<m){
                    x = (x-h)-1;
                    y = 60-(m-y);
                    st.insert({x,y});
                }
                else{
                    x = 23;
                    y = 60 - (m-y);
                    st.insert({x,y});
                }
            }
            else if(x==0 && h!=0){
                if(y>=m){
                    x = 24-h;
                    y = y-m;
                    st.insert({x,y});
                }
                else if(y<m){
                    x = (24-h)-1;
                    y = 60-(m-y);
                    st.insert({x,y});
                }
                // else{
                //     x = 23;
                //     y = 60 - (m-y);
                //     st.insert({x,y});
                // }
            }
            else{
                if(x<h && y>=m){
                    x = 24 - (h-x);
                    y = y - m;
                    st.insert({x,y});
                }
                else{
                    x = (24-(h-x))-1;
                    y = 60 - (m-y);
                    st.insert({x,y});
                }
            }
        }
        // if(!check) cout<<(*st.begin()).first<<" "<<(*st.begin()).second<<'\n';
        cout<<(*st.begin()).first<<" "<<(*st.begin()).second<<'\n'; 
    }

    // while(t--){

    //     int n, h, m;
    //     cin>>n>>h>>m;

    //     vector<int>arr(24,-1);

    //     while(n--){
    //         int x;
    //         int y;
    //         cin>>x>>y;
    //         arr[x] = y;
    //     }

    //     int x = h;
    //     int cnt = 0;
    //     while(true){
    //         if(arr[x]!=-1){
    //             if(x==h && arr[x]==m){
    //                 cout<<0<<" "<<0<<endl;
    //                 break;
    //             }
    //             else{
    //                 if(arr[x]==m){
    //                     cout<<cnt<<" "<<0<<endl;
    //                     break;
    //                 }
    //                 else if(arr[x]>m){
    //                     cout<<cnt<<" "<<arr[x]-m<<endl;
    //                     break;
    //                 }
    //                 else{
    //                     cout<<--cnt<<" "<<60-(m-arr[x])<<endl;
    //                     break;
    //                 }
    //             }

    //         }
    //         x++,cnt++;
    //         if(x==24) x = 0;
    //     }


    // }

    return 0;
}