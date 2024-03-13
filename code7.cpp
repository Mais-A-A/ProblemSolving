//Mais Arafeh
#include <bits/stdc++.h>

#define int long long
#define endl '\n'

using namespace std;
vector<int>factorial;
int mod = 998244353;

void solve(){
    int cnt=1,one=0,two=1;
    string s;
   cin>>s;
   vector<int>v;//111
   for(int i=1;i<s.size();i++){
       
        if(s[i]==s[i-1]){
            cnt++;
        }else if( cnt > 0 ){
            v.push_back(cnt);
            cnt = 1;
        }
       
   }
   if( cnt > 0 ) v.push_back(cnt);
   
   int ans = 1;
   
   for(int i=0;i<v.size();i++){
       
       one += (v[i]-1);
       two*=(v[i]);
       two%=mod;
       
   }
 
   two = (two%mod * factorial[one] % mod) % mod;
   cout<<one<<" "<<two%mod<<endl;
    
 
}
int32_t main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int x=1;
    factorial.push_back(1);
    for(int i=1;i<=200000;i++){
        x=((x%mod)*(i%mod))%mod;
        factorial.push_back(x);
    }
    int t = 1; cin >> t;
    while( t-- ){
    
        solve();
    }

    return 0;
}