//Mais Arafeh
#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;
    

void solve(){
    
    int n,heads=1,cnt2=0,lvl=1;
    cin>>n;
    int a[n];
    cin>>a[0];

    for(int i=1;i<n;i++){ // 1 5 4 3 2 
        cin>>a[i];
        if(a[i]>a[i-1]){
            cnt2++;
        }
        else if(a[i]<a[i-1]){
            
            heads--; // 0 
            if(heads<=0){
                lvl++; // next lvl 
                heads=cnt2;
                cnt2=0;
            }
            cnt2++;
        }
        //cout<<i+1<<" "<<heads<<" "<<cnt2<<endl;
    }
    cout<<lvl<<endl;
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

 