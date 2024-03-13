//Mais Arafeh
//D

#include <bits/stdc++.h>

#define endl "\n"
#define int long long
using namespace std;

string DecimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }   
      return str;
}

void solve(){
    int l,r,ans;
    cin>>l>>r;
    bool flag=false;
    int binary[60]={1};
    for(int i=1;i<60;i++){
        binary[i]=2*binary[i-1];
        //cout<<i<<" "<<binary[i]<<endl;
    }
    for(int i=0;i<60;i++){
        if(binary[i]-1>=l&&binary[i]-1<=r){
            flag=true;
            ans=binary[i]-1;
        }
    }
     if(flag){
        cout<<ans<<endl;
    }
    else if(l==r)cout<<l<<endl;
     else{
       string st=DecimalToBinary(l);
       int ones=__builtin_popcount(l),anss;
       anss=ones;
       int ll=l;
       for(int i=0;i<st.size();i++){
           if(st[i]=='0'&&(ll+binary[i])<=r)ll+=binary[i];
       }
       cout<<ll<<endl;
       
    }
}
int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    for (int x = 0; x < t; x++) {
        solve();
        
    }

    return 0;
}

 