//            Author : Aman Umrao

#include"bits/stdc++.h"
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#include "amandbg.h"
#else
#define debug(...) 19
#endif

#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define HC int t;cin>>t;for(ll i=1;i<=t;i++){cout<<"Case #"<<i<<": ";aman();}
#define tc int t;cin>>t;while(t-->0)aman();
#define tcc aman();
#define foi(n) for (ll i = 0; i < (n); i++)
#define foo(n) for (int i = 1; i < (n); i++)
#define fl(i,l,n) for (int i = l; i < n; i++)
#define fll(i,l,n) for(int i = l; i <= n; i++)
#define sz(x) ((int)(x).size())
#define cinv(x) for(auto &i:x)cin>>i
#define coutv(x) for(auto i:x)cout<<i<<' '
#define couttab cout<<'\t'
#define all(v) begin(v),end(v) 
#define rall(v) rbegin(v),rend(v)
#define maxvalinset(v) *max_element(all(v))
#define sp <<' '<<
#define esp <<' '
#define nl <<'\n'
#define print(x) (x)?cout<<"YES\n":cout<<"NO\n";
#define ff first
#define ss second   
#define pb push_back
#define popb pop_back
#define eb emplace_back
#define mp make_pair
#define ui32 uint32_t
#define ui64 uint64_t
#define set_bits __builtin_popcountll

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<pii,int> ppi;
typedef vector<pii> vpii;
typedef vector<ppi> vppi;
typedef map<int,int> mii;
typedef map<int,vi> mvi;
typedef map<pii,int> mpi;
typedef priority_queue<ppi,vppi,greater<ppi>> min_heap_ppi;
typedef priority_queue<ppi> max_heap_ppi;

// #define int long long int
// typedef vector<int> vi;
// typedef vector<vi> vvi;

const ll mod1 = 1e9 + 7LL;
const ll mod2 = 998244353;
const lld PI = 3.141592653589793238462;
const long long inf = 1e9 + 7LL;
const long double eps = 1e-9;
const int N = (1e6 + 1);
//const int mxn = 3e6 + 2;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

/*-------------------------| Let's DANCE Babyy |-------------------------*/

bool sortrev(const pair<int,int> &a,  const pair<int,int> &b) 
{ 
    return (a.first > b.first or a.second > b.second); // both pair in sorted mannner
    // return (a.second > b.second);     //
    // return 
}

ll powl(ll n,ll p)
{
    if(p==0)return 1;
    if(p==1)return n;
    return (n*(powl(n,p-1)%mod1));
}

vector<bool> arr(100000001,1); //1e8+1
vi ag;
void prime()
{
    int k=0;
    for(int i=2;i*i<=1000001;i++)
    {
        if(arr[i])
        {
            for(int j=i*i;j<1000001;j+=i)
                arr[j]=0;
        }
    }
    for(int i=2;i<1000001;i++)
        if(arr[i])++k;
    cout<<k;
}

int divsum(int num)
{
    // Final result of summation of divisors
    int result = 0;
    if(num == 1) // there will be no proper divisor 
      return result;
    // find all divisors which divides 'num'
    for (int i=2; i<=sqrt(num); i++)
    {
        // if 'i' is divisor of 'num'
        if (num%i==0)
        {
            // if both divisors are same then add
            // it only once else add both
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }
 
    // Add 1 to the result as 1 is also a divisor
    return (result + 1);
}

void aman()
{   
    ll ans=0;
    vi a;
    vi ab(60124,1);
    for(int i=2;i<30000;i++)
    {
        int k=divsum(i);
        if(k>i)a.eb(i);
    }
    // debug(a);
    int siz=sz(a);
    foi(siz)
    {
        for(int j=0;j<siz;j++)
        {
            ab[a[i]+a[j]]=0;
        }
    }
    for(int i=1;i<28124;i++)
    if(ab[i])
        {
            ans+=i;
            // cout<<i esp;
        }
    cout<<ans;
}
 
int32_t main()
{
    auto start = std::chrono::high_resolution_clock::now();
    // cout << fixed << setprecision(10);
    // cerr << fixed << setprecision(10);
    
    
    IOS tcc
    return printf("");


    
    auto stop = std::chrono::high_resolution_clock::now(); 
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    cerr << fixed << setprecision(9)<< "TT : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;
    return 0;
}
/* LOVE
 






Why I am so lonely??
                           ......There'll be a day, I'll be loved, I'll be admired

*/

