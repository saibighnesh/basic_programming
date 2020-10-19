// QUICKSORT IMPLEMENTATION




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

ll partition(ll arr[],ll start,ll end)     // partition function to generate partitions.....
{

    ll pivot= arr[end];                    // taking the last element to be the pivot element always.....
    ll partition_index= start;             // partition_index-> pointer whose left has elements<= pivot and right has elements > pivot

    for(ll i=start;i<=end-1;i++)
    {
        if(arr[i]<=pivot)                  
        {
            swap(arr[i],arr[partition_index]); // if element smaller than pivot found, swap part_index  element with it so that smaller elements lies to the left of partition_index
            partition_index += 1;
        }
    }

    swap(arr[partition_index],arr[end]);     // swap part_index with the last element/PIVOT ELEMENT of the array.....
    return partition_index;                  // return the partition index...the index containging pivot element & at this index the pivot element is
                                             // in its correct position as in the sorted array
}

void QuickSort(ll arr[],ll start,ll end)     
{
    if(start<end){                           

        ll pid= partition(arr,start,end);
        QuickSort(arr,start,pid-1);
        QuickSort(arr,pid+1,end);
    } 
    else return;       // base case....
}


int main()
{
    ojudge();
    

    ll n;
    cin>>n;
    ll arr[n];
    fr(i,0,n) cin>>arr[i];
 
    QuickSort(arr,0,n-1);          /// end-> MUST BE A VALID INDEX HAVING AN ELEMENT and not the size of the array....

    fr(i,0,n) cout<<arr[i]<<" ";

    time();
    return 0;
}
