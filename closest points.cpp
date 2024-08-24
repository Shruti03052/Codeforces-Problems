# include<bits/stdc++.h>
using namespace std;


void solve(vector<int> arr,int n){
    if(n>2){
        cout<<"NO"<<endl;
        return;
    }
    
    for(int i=0;i<n-1;i++){
        if(arr[i+1]==arr[i]+1){
            cout<< "NO"<<endl;
            return;
    
        }
    }
    cout<<"YES"<<endl;
    return;

}
int main(){
    int t,n;
    cin>>t ;
    
    for(int i=0;i<t;i++){
        int ele;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>ele;
            arr[j]=ele;
        }
        solve(arr,n);

    }
    return 0;
}