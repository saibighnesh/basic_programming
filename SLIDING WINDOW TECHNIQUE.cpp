// AMAN MISHRA (IIT KGP) : SLIDING WINDOW TECHNIQUE



#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[200001];

ll sliding_window(ll n)
{
    ll left=0;
    ll right=0;
    map<ll,ll> m;
    m[arr[0]]++;
    ll count=0;
    ll size=n+1;
    while(right<n&&left<n)
    { 
       // m[arr[r]]++;
        if(m[1]>=1&&m[2]>=1&&m[3]>=1)
        {
            size=min(size,right-left+1);
            count++;
            m[arr[left]]--;
            left++;
        }
        else
        {
            right++;
            m[arr[right]]++;
        }
    }
    
    return size;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    ll n=s.length();
	    for(ll i=0;i<n;i++)
	    {
	        arr[i]=s[i]-'0';
	    }
	    
	    ll a=sliding_window(n);
	    if(a==n+1)
	    {
	        cout<<0<<"\n";
	    }
	    else
	    {
	        cout<<a<<"\n";
	    }
	    
	}
}
