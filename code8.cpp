//MAis Arafeh
#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;

void solve(){
   int n;
   cin>>n;
   string x,ans={};
   cin>>x;
   string arr[10]={{},{},"2","3","322","5","53","7","7222","7332"};
   for(int i=0;i<n;i++){
       if(x[i]!='0'&&x[i]!='1'){
           ans+=arr[x[i]-48];
       }
   }
   sort(ans.begin(),ans.end());
   reverse(ans.begin(),ans.end());
   cout<<ans<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    
    int t = 1;// cin >> t;
    while( t-- ){
    
        solve();
    }

    return 0;
}