//I LOVE MY CODES 3000 TIMES 
//NEVER GIVE UP
//WHATEVER IT TAKES
#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
#define loop(i,a,b) for(i=a;i<=b;i++) 
#define Rloop(i,a,b) for(i=a;i>=b;i--)
#define AVENGERS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INFINITYWAR ll t;cin>> t;while(t--)
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define sub(b,c) substr(b,c)
#define sorted(a,n) is_sorted(a,a+n)
//YOU ARE IN ENDGAME NOW,DISPLAY YOUR CODE HERE
bool check(ll n) 
{ 
    if (n == 0) 
        return 0; 
    while (n != 1) 
    { 
        if (n%2 != 0) 
            return 0; 
        n = n/2; 
    } 
    return 1; 
} 
int main(){
AVENGERS
INFINITYWAR{
ll n,i;
cin >> n;
ll k=check(n);
if(k==1 && n>1)
cout << -1 << "\n";
else if(n==1)
cout << 1 << endl;
else if(n==3)
cout << 2 <<" "<< 3 << " "<< 1<<"\n";
else if(n==5)
cout << 2 <<" "<< 3 << " "<< 1<< " " << 5 << " "<< 4<<endl;
else if(n==6)
cout << 2 <<" "<< 3 << " "<< 1<< " " << 5 << " "<< 4<<" "<< 6<< endl;
else if(n==7)
cout << 2 <<" "<< 3 << " "<< 1<< " " << 5 << " "<< 4<<" "<< 6<<" "<< 7 <<endl;
else if(n==9)
cout << 2 <<" "<< 3 << " "<< 1<< " " << 5 << " "<< 4<<" "<< 6<< " "<< 7 << " " << 9 << " "<< 8 <<endl;
else {
cout << 2 <<" "<< 3 << " "<< 1<< " " << 5 << " "<< 4<<" "<< 6<< " "<< 7 << " " << 9 << " "<< 8 << " ";
loop(i,10,n){
ll p=check(i),u=1;
if(p==0)
cout << i << " ";
else
{cout << i+1 << " " << i << " ";
i++;}
}
cout << endl;}


}

return 0;
}
