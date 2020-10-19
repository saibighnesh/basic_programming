
// MULTI-SOURCE BREADTH FIRST SEARCH...


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[501][501];
ll vst[501][501];

ll dx[]={1,-1,1,0,-1,0,-1,1};
ll dy[]={1,-1,0,1,0,-1,1,-1};

bool is_valid(ll x,ll y,ll n, ll m)
{
    if((x>=1&&x<=n)&&(y>=1&&y<=m))
    {
        return true;
    }
    else
    {
        return false;
    }
}




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    ll maxm=0;
	    for(ll i=1;i<=n;i++)
	    {
	        for(ll j=1;j<=m;j++)
	        {
	            cin>>arr[i][j];
	             maxm=max(maxm,arr[i][j]);
	             vst[i][j]=0;
	        }
	        
	       
	    }
	    ll cc=0;
	    queue<pair<pair<ll,ll>,ll> > q;
	    for(ll i=1;i<=n;i++)
	    {
	        for(ll j=1;j<=m;j++)
	        {
	            if(arr[i][j]==maxm)
	            {
	                q.push({{i,j},0});   // PUSHING THE SOURCE INTO A QUEUE AND THEN RUN BFS ON THAT QUEUE
	                cc++;
	            }
	        }
	    }
	    
	    if(cc==n*m)
	    {
	        cout<<0<<"\n";
	    }
	    
	    else
	    {
	    ll ans=0;
	    
	    while(!q.empty())
	    {
	        ll x=q.front().first.first;
	        ll y=q.front().first.second;
	        ll d=q.front().second;
	        ans=max(ans,d);
	        vst[x][y]=1;
	        q.pop();
	        
	        for(ll i=0;i<8;i++)
	        {
	            if((is_valid(x+dx[i],y+dy[i],n,m)==true)&&(vst[x+dx[i]][y+dy[i]]==0))
	            {
	                q.push({{x+dx[i],y+dy[i]},d+1});
	                vst[x+dx[i]][y+dy[i]]=true;
	            }
	        }
	    }
	    
	    cout<<ans<<"\n";
	    
	    } 
	    
	}
	
}
