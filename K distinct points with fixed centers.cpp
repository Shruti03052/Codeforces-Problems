#include<bits/stdc++.h>
using namespace std;
void solve(int x_c,int y_c,int k){
    
    for(int i=1;i<=k/2;i++){
        int x_ele1=x_c-i;
        cout<<x_ele1<<" "<<y_c<<endl;
        int x_ele2=x_c+i;
         cout<<x_ele2<<" "<<y_c<<endl;

        

    }
    if(k%2==1){
        cout<<x_c<<" "<<y_c<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x_c,y_c,k;
        cin>>x_c>>y_c>>k;
        solve(x_c,y_c,k);
    }
    return 0;
}