#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dist(int x1,int y1,int x2,int y2){
    ll d=pow((x2-x1),2)+pow((y2-y1),2);
    return d;

}
void solve(int s_x,int s_y,int e_x,int e_y,vector<pair<int,int>> arr,int n){
    ll d1=dist(s_x,s_y,e_x,e_y);
    for(int i=0;i<n;i++){
        ll d=dist(arr[i].first,arr[i].second,e_x,e_y);
        if(d <=d1){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
    return ;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y;
        vector<pair<int,int>> arr(n);
       for(int i=0;i<n;i++){
            cin>>x>>y;
            arr[i]={x,y};
        }
        int s_x,s_y,e_x,e_y;
        cin>>s_x>>s_y>>e_x>>e_y;
        solve(s_x,s_y,e_x,e_y,arr,n);
    }
    return 0;
}