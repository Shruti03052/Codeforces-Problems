#include<bits/stdc++.h>
using namespace std;

void solve(pair<int,int>  a,pair<int,int>  b){
    int a1=a.first;
    int a2=a.second;
    int b1=b.first;
    int b2=b.second;
    pair<int,int> comm={max(a1,b1),min(b2,a2)};
    int diff=comm.second-comm.first;
    if(diff<=0){
        cout<<1<<endl;
        return;
    }
    else{
        if(comm.second+1<max(b2,a2)){
            cout<<diff+1<<endl;
            
        }
        else if(comm.first>min(a1,b1)){
            cout<<diff+1<<endl;
            
        }
        else if(comm.first >= min(a1,b1) && comm.second <= max(b2,a2)){
            cout<<diff+2<<endl;
        }
        else{
            cout<<diff<<endl;
        }
    }
    return ;
    


    
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        pair<int,int>  a;
        pair<int,int> b;
        int x,y;
        cin>>x>>y;
        a={x,y};
        cin>>x>>y;

        b={x,y};
        solve(a,b);

       
    }
    return 0;
}