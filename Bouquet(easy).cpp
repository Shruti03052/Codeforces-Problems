#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(ll n,ll m,vector<ll> arr){
   ll i=0;
   ll j=0;
    ll ans=0;
    ll sum=0;
    sort(arr.begin(),arr.end());
    while(j<n){
        if(abs(arr[j]-arr[i])<=1){
        sum+=arr[j];
        
        if(sum<=m){
            ans=max(ans,sum);
        }
        else{
            while(sum>m){
                 sum-=arr[i++];
                 
            }
            ans=max(ans,sum);
            
        }
        j++;
        }
        else{
            sum-=arr[i];
            i++;
        }
    }
    cout<<ans<<endl;


   
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> flowers(n);
        for(ll i=0;i<n;i++){
            cin>>flowers[i];
        }
        solve(n,m,flowers);
    }
    return 0;
}