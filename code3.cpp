// Mais Arafeh
#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
  int n;
  cin>>n;
  vector<int> v(n),csum(n,0);
  for(int i=0;i<n;i++){
      cin>>v[i];
  }
  csum[n-1]=v[n-1];
  if(v[n-1]<0) csum[n-1]=0;
  for(int i=n-2;i>=0;i--){  // 1 -2 -1  1 -1 
      csum[i]=csum[i+1];    //  2 1 1 1    -1
      if(v[i]>0)
            csum[i]+=v[i];
  }
  int ans=0;
  for(int i=0;i<n;i++){
      if((i+1)%2){
          if(v[i]<0)
          ans=max(ans,csum[i]+v[i]);
          else{
              ans=max(ans,csum[i]);
          }
      }
      else if(i!=n-1){
          ans=max(ans,csum[i+1]);
      }
  }
  cout<<ans<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 1; cin >> t;
    while( t-- ){
    
        solve();
    }

    return 0;
}
// 2 5 2 5 