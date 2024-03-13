//Mais Arafeh
#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int node,n,a,b;
vector<bool>vis,vis2;
vector<vector<int>>adjlist;
bool flag;
int bfs(int source){
    vis2.clear();
    vis2.assign(n+1,false);
    queue<int>q; q.push(source);
    vector<int>lvl(n+1,0);
    lvl[source]=0; 
    while(!q.empty()){
        int top=q.front(); q.pop();
        
        if(top==node){
            return lvl[top];
        }
        for(int i=0;i<adjlist[top].size();i++){
            int child=adjlist[top][i];
            if(!vis2[child]){
                vis2[child]=true;
                q.push(child); lvl[child]=lvl[top]+1; 
                
            }
        }
    }
    return 0;
}

void dfs(int u,int p){
   // cout<<"ok: "<<u<<" "<<p<<endl;
    if(vis[u]){
        if(!flag){
            flag=true;
            node=u;
        }
        return ;
    }
    vis[u]=true;
    //cout<<"ok2 : "<<vis[u]<<endl;
    for(int i=0;i<adjlist[u].size();i++){
        if(adjlist[u][i]!=p){
            dfs(adjlist[u][i],u);
        }
    }
}
void solve(){
  int f,s;
  cin>>n>>a>>b;
  adjlist.clear();
  vis.clear();
  vis.assign(n+1,false);
  adjlist.assign(n+1,vector<int>{});
  
  
  for(int i=1;i<=n;i++){
      cin>>f>>s;
      adjlist[f].push_back(s);
      adjlist[s].push_back(f);
  }
  flag=false;
  dfs(b,b);
  //cout<<node<<endl;
  int aa=bfs(a);
  int bb=bfs(b);
  //cout<<node<<endl;
  //cout<<aa<<" "<<bb<<endl;
  if(a==b){
      cout<<"NO\n";
      return ;
  }
  if(bb>=aa)cout<<"NO\n";
  else cout<<"YES\n";
    
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