#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m,int k){
    cout<< min(n,k) *min(m,k)<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;
        solve(n,m,k);
    }
    return 0;
}