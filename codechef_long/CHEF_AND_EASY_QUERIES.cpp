//I LOVE MY CODES 3000 TIMES 
//NEVER GIVE UP
//WHATEVER IT TAKES
#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
#define loop(i,a,b) for(i=a;i<b;i++) 
#define Rloop(i,a,b) for(i=a;i>=b;i--)
#define AVENGERS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INFINITYWAR ll t;cin>> t;while(t--)
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define sub(b,c) substr(b,c)
#define sorted(a,n) is_sorted(a,a+n)
//YOU ARE IN ENDGAME NOW,DISPLAY YOUR CODE HERE

int main(){
AVENGERS
INFINITYWAR{
ll n,k,e=0;
cin >> n >> k;
ll a[n],i,j;
loop(i,0,n){
cin >> a[i];
}
ll sum=0;
loop(i,0,n){
sum=sum+a[i];
ll p=k-sum;
if(p>0)
{ e=1;
 cout<< i+1<<"\n";
 break;
}
else
{ 
 sum=sum-abs(k);
 }}
if(e==0)
cout << i+(sum/k)+1 << "\n";
}

return 0;
}
