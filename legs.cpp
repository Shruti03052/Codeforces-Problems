#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int cnt=0;
    cnt+=n/4;
    int rem=n%4;
    cnt+=rem/2;
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}