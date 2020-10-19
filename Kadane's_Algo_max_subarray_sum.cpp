#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

typedef long long int ll;
using ii= pair<ll,ll>;
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define all(o) (o).begin(),(o).end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ld long double
#define eps 0.00000000001
#define mod 1000000007

class prioritize{
    public: bool operator() (ii &p1,ii &p2){
        return p1.F<p2.F;
    }
};

auto start_time= high_resolution_clock::now();
void time()
{
    #ifndef ONLINE_JUDGE
        auto stop_time= high_resolution_clock::now();
        auto duration= duration_cast<milliseconds>(stop_time-start_time);
        cout<<"run time: "<<duration.count()<<" ms"<<"\n";
    #endif
    return;
}

void ojudge()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r", stdin);
        freopen("output1.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return;
}

ll Kadane(vector<ll> arr)     // FINDING MAXIMUM SUBARRAY SUM OF AN ARRAY...
{
    ll n= arr.size();
    ll max_so_far= -1e18;     // max sub-array sum encountered till now...
    ll max_ending_here= 0;    // temporary max sub-array sum ending at this index...

    for(ll i=0;i<n;i++)
    {
        max_ending_here += arr[i];
        if(max_ending_here > max_so_far) // if max_so_far < max_ending_here -> update
        {
            max_so_far = max_ending_here;
        }
        if(max_ending_here<0) max_ending_here = 0;  // if max_ending_here<0 -> put 0;
    }

    return max_so_far;         // return...
}



int main()
{
    ojudge();
    
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        fr(i,0,n) cin>>arr[i];
        ll sum=0;

        fr(i,0,n) if(i%2==0) sum += arr[i];

        vector<ll> psum_even;
        vector<ll> psum_odd;

        for(ll i=0;i+1<n;i+=2)
        {
            ll s= arr[i+1]-arr[i];
            psum_even.PB(s);
        }

        for(ll i=1;i+1<n;i+=2)
        {
            ll x= arr[i]-arr[i+1];
            psum_odd.PB(x);
        }

        ll ans1= max(Kadane(psum_even),(ll)0);
        ll ans2= max(Kadane(psum_odd),(ll)0);
        
        cout<<sum+max(ans1,ans2)<<"\n";
    }
    



    time();
    return 0;
}
