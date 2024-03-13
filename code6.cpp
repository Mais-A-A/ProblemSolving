//Mais Arafeh 
#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;


void solve(){
   int n,num,x;
   cin>>n;
   set<int>total;
   vector<set<int>>v(n);
   for(int i=0;i<n;i++){
       cin>>x;
       while(x--){
           cin>>num;
           v[i].insert(num);
           total.insert(num);
       }
   }
   int sum=total.size();
   
   int ans=0;
   bool flag=false;
    for(int i=1;i<=50;i++){
        set<int>sol;
        flag=false;
              //cout<<"HI "<<i<<endl;
        for(int j=0;j<n;j++){
           if(!v[j].count(i)){
                sol.insert(v[j].begin(), v[j].end());
        } 
        //cout<<"size : "<<sol.size()<<endl;
       if(sol.size()>ans&&sol!=total){
           //cout<<i<<" "<<sol.size()<<endl;
           ans=sol.size();
       }
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