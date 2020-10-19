// NQueen backtracking problem...(refer Hackerearth for clarity..)

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
using ii= pair<ll,ll>;
#define all(o) (o).begin(),(o).end()
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define ld long double
#define eps 0.00000000001

class prioritize{
    public: bool operator() (ii &p1,ii &p2){
        return p1.F<p2.F;
    }
};

ll board[11][11];  // chess board...


bool isvalid(ll n,ll x,ll y)   // checking if the cell (x,y) is safe or not to place the Queen...
{
	for(ll i=1;i<=n;i++){      // checking along row...
		if(board[x][i]) return false;
	}
	for(ll j=1;j<=n;j++){      // checking along column...
		if(board[j][y]) return false;
	}

	for(ll i=1;i<=n;i++){      // checking along major and minor diagnol...
		for(ll j=1;j<=n;j++){
			if(board[i][j]){
				if((i+j==x+y)||(i-j==x-y)){
					return false;
				}
			}
		}
	}

	return true;  
}


bool NQueen(ll n,ll k){      // Function to place,check and Backtrack...
	if(k==0) return true;

	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(!isvalid(n,i,j)) continue;   // if not safe..move to next cell on board
			board[i][j]=1;                  // else put a queen over there and check if NQueen(n,k-1) is true
			if(NQueen(n,k-1)) return true;
			board[i][j]=0;                  // if not, backtrack by putting board[i][j]=0 i.e. removing the placed queen
		}
	}
	return false;
}


int main()
{
    
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r", stdin);
        freopen("output1.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    ll n;
    cin>>n;
    
    for(ll i=1;i<=10;i++){
    	for(ll j=1;j<=10;j++){
    		board[i][j]=0;
    	}
    }

    if(NQueen(n,n)){
    	cout<<"YES\n";
    	for(ll i=1;i<=n;i++){
    		for(ll j=1;j<=n;j++){
    			cout<<board[i][j]<<" ";
    		}
    		cout<<"\n";
    	}
    }
    else cout<<"NO\n";
}