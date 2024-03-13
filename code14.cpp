//MAis Arafeh
#include <bits/stdc++.h>

#define  int       long long 
#define  all(x)      (x).begin(), (x).end()
#define  f           first
#define  s           second
#define  lcm(a, b)   ( (a * b)/__gcd(a, b) )
#define  inf         0x3f3f

const int N = 2e5 + 7;
int mod = 998244353;

using namespace std;

void solve(){
    
    vector<int> ans(1000001, 0), fact(1000001, 0);
    ans[1] = 1;
    fact[1] = 1;
    for(int i = 2; i <= 1000000; i++){
        fact[i] = (fact[i-1]%mod*i%mod)%mod;
        ans[i] = (((ans[i-1]-1)%mod * i%mod)%mod + fact[i]%mod)%mod;
    }
    int n;  cin >> n;
    cout << ans[n] << endl;
    
}
 
int32_t main()
{ 
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    
    int t = 1;  //cin >> t;
    while( t-- ){
        solve();
    }

    return 0;
}
 