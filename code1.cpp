// Mais Arafeh
#include <bits/stdc++.h>

#define endl "\n"
#define int long long
#define  lcm(a, b)   ( (a * b)/__gcd(a, b) )

using namespace std;
void solve(){ 
   int n;
   cin>>n;
   string s;
   map<string,int>m;
   for(int i=0;i<n;i++){
       cin>>s;
       m[s]++;
       if(m[s]==1)cout<<"OK\n";
       else {
           cout<<s<<m[s]-1<<endl;
       }
   }
   
}
int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    for (int x = 0; x < t; x++) {
        solve();
    }
    return 0;
}



 