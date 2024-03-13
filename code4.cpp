///Mais Arafeh 
#include <bits/stdc++.h>
#define  int   long long 
#define  endl '\n'

using namespace std;
void solve(){
    int n; cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int groups=0,tot=n;
    
    for(int j=0;j<n;j++){
        int num =2147483647-arr[j] ;
        //if((num&arr[j])!=0)cout<<"error\n"<<num<<" "<<arr[j]<<" "<<(num&arr[j])<<endl;
        //cout<<groups<<endl;
        
        if(mp[arr[j]]>0&&mp[num]>0){
            mp[num]--;
            mp[arr[j]]--;
            groups++;
        }
        //cout<<groups<<endl;

    }
    cout<<tot-groups<<endl;
    /*int ans =max(groups,1ll);
    cout<<ans<<" "<<ans2<<endl;*/
    
}
int32_t main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 1; cin >> t;
    while( t-- ){
        solve();
    }

    return 0;
}