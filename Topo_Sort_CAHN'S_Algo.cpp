// TOPOLOGICAL SORTING (lexicographically smallest) USING Kahn's Algorithm......
// TOPO PROBLEM-> SPOJ

// Cahn is basically a BFS + in_degree concept......

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
using ii= pair<ll,ll>;
#define F first
#define S second
#define MP make_pair
#define PB push_back

vector<ll> v[10010];
ll indegree[10010]={0};                  //Indegree array to store the indegrees of all the nodes in the graph....
vector<ll> topo;                         //Topo vector to store the answer

void Cahn(ll n)                          // Cahn's Algorithm......
{
    priority_queue<ll> q;                // use priority_queue so as to achieve the lexicographically smallest topo ordering...
    
    for(ll i=1;i<=n;i++)                 // loop over all the nodes of the graph....
    {
        if(indegree[i]==0)               // if there indegree is 0 -> all the prerequisites has already been visited
        {
            q.push(-i);                  // Hence push it into the queue with a -ve sign so that smallest is at frontappears on the priority_q
        }
    }
    
    while(!q.empty())
    {
        ll node = -q.top();             // Beware! while poping, consider the -ve sign....
        q.pop();                        
        
        for(auto neigh: v[node])        // Visit all the neighbours of node....
        {
            indegree[neigh]--;          // decrease the indegree of all the neighbours reachable from the node.....
            if(indegree[neigh]==0)       
            { 
                q.push(-neigh);         // check if the neighbour now has in_degree 0,  if so , push it into the queue.....
            }
        }
        
        topo.PB(node);                  // push node into the topo array as 1) its in_degree in 0(since it's in the queue)
    }                                   // 2) all its neighbours has been processed
     
    
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	ll n,m;
	cin>>n>>m;
	
	while(m--)
	{
	    ll x,y;
	    cin>>x>>y;
	    
	    v[x].PB(y);
	    indegree[y]++;
	}
	
	Cahn(n);                         // VERY IMPORTANT note !!!!!!!!!!!!!!
	                               
	if(topo.size()!=n)               // IF THERE IS A CYCLE IN THE GRAPH, YOU CANNOT HAVE A TOPO ORDERING...YOU HAVE A CYCLE IN THE GRAPH IF
	{                                // after applying Cahn's , the topo vector has nodes less than n....
	    cout<<"Sandro fails.\n";
	}
	
	else
	{
	    for(auto j: topo){
	        cout<<j<<" ";
	    }
	    
	    cout<<"\n";
	}
	

}
