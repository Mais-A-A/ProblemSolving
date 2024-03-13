//Mais Arafeh
#include <bits/stdc++.h>

#define int long long
#define ll unsigned long long
#define endl '\n'

using namespace std;


void solve(){
    int n,ans=0;
    cin>>n;
    int arr[n],power[n]={0}; // 2^x
    cin>>arr[0];
    power[0]=0;
    for(int i=1;i<n;i++){
        cin>>arr[i];
        int ai=arr[i];
		power[i]=0;
		while((ai/2)>=arr[i-1])
		{
			ai/=2;
			power[i]--;
		}
		while(ai<arr[i-1])
		{
			ai*=2;
			power[i]++;
		}
		power[i]=max((long long)0,power[i-1]+power[i]);
		ans+=power[i];
       /* if(arr[i-1]*(1ll<<power[i-1])>arr[i]){
            double d=(log2(arr[i-1]*1.0/arr[i]))+power[i-1];
            int d1=d,d2=d+1;
            if(arr[i-1]*(1ll<<power[i-1])<=(arr[i]*(1ll<<d1))){
                power[i]=d1;
            } else {
                power[i]=d2;
            }
            ans+=power[i];
            
        }
        else power[i]=0;*/
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
/*
0
1
3 // 2
6 // 4
10 // 5
3
0
2 // 1
66 // 11

*/