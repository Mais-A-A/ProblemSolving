//Mais Arafeh
#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

void solve(){
   bool flag=false;
   vector<int>v;
   int n,k;
   cin>>n>>k;
   int f[n],h[n];
   
   
    for(int i=0;i<n;i++){
       cin>>f[i];
    }
    for(int i=0;i<n;i++){
       cin>>h[i];
    }
   int l=0,r=0,sum=0,ans=0;
   
   
   while(l<n&&r<n){
       
       if(r-1>=0){
           if(h[r-1]%h[r]!=0){
               l=r;
               sum=0;
           }
       }
       sum+=f[r];
       while(sum>k){
           sum-=f[l];
           l++;
       }
       ans=max(ans,r-l+1);
       r++;
       
   }
    cout<<ans<<endl;
   
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1; cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}