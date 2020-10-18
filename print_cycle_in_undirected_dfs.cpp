#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> v[200200];
ll color[200200]={0};
ll parent[200200];
vector<ll> cycle;
//ll start;
//ll cend;

void dfs(ll h,ll p)   // h->CURRENT,p->PARENT.....
{
  
   parent[h]=p;      // mark p as parent of h...
   if(color[h]==2)   //already completely visited...
   {
       return;
   }
   
   else if(color[h]==1)             //-> a backedge detected.....
   {
        
       ll curr=p;                   // backtrack using the parent array untill you reach the node h...
       while(curr!=h)
       {
           cycle.push_back(curr);   // keep pushing all parents into the cycle vector....
           curr=parent[curr];       // update curr to its parent....
       }
       
       cycle.push_back(h);          // push_back the initial node h to complete the cycle...
       
       color[h]=2;                  // change the colour of the node to 2 and return from  the function since
       return;                      // given that only one CYCLE....
       
   }
   
   
   
  if(color[h]==0)                    // unvisited/virgin.....go for normal dfs....
   {
       color[h]=1;                   // mark visited-1 at start...
       for(auto u: v[h])             // iterate on adjacency list of h.....
       {
           if(u!=parent[h])          // if a list item u of h is not the parent of h, run dfs on u...
           {
              dfs(u,h);
           }
       }
       color[h]=2;                    // mark visited-2 at end...
       return;                        // return from the function call....
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
	    ll n;
	    cin>>n;
	    
	    while(n--)                     // ONLY N edges since it was given that graph has only 1 cycle...
	    {
	        ll x,y;
	        cin>>x>>y;
	        v[x].push_back(y);         // generating the undirected graph's adjacency list....        
	        v[y].push_back(x); 
	    }
	    
	    memset(color,0,sizeof(color));            // initalize the color array as unvisited...
	    memset(parent,-1,sizeof(parent));         // initalize the parent array as -1...
	    
	    dfs(1,0);                       // run dfs on 1 and mark its parent as 0... 
	    if(cycle.size()==0)             // ONE CALL SUFFICIENT AS THE GRAPH IS GIVEN TO BE CONNECTED .....
	    {
	        cout<<-1<<"\n";             // its not essential since already given that graph has one cycle always...
	    }
	    
	    else
	    {
	         for(ll i=0;i<cycle.size();i++)   // iterate in the cycle vector.....
	         {
	             cout<<cycle[i]<<" ";         // print the nodes involved in the cycle.....
	         }
	    }
	    
	}
	
}
