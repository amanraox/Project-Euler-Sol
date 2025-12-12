//             Author : Aman Umrao

#include"bits/stdc++.h"
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#include "amandbg.h"
#else
#define debug(...) 19
#endif

#define IOS cin.tie(nullptr)->sync_with_stdio(false);
#define HC cin>>t;for(ll i=1;i<=t;i++){cout<<"Case #"<<i<<": ";aman();}
#define tc cin>>t;while(t--)aman(); // t7 wrong so cout<<t-7
#define tcc aman();
#define foi(n) for (ll i = 0; i < (n); i++)
#define sz(x) ((int)(x).size())
#define cinv(x) for(auto &i:x)cin>>i
#define coutv(x) for(auto i:x)cout<<i<<' '
#define all(v) v.begin(),v.end() 
#define rall(v) v.rbegin(),v.rend()
#define print(x) (x)?cout<<"YES\n":cout<<"NO\n";
#define eb emplace_back


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

int t;
const char nl = '\n', sp = ' ';
const ll mod1 = 1e9 + 7LL;
const ll mod2 = 998244353;
const lld PI = 3.1415926535897932384626433832795;
const long long inf = 1e9 + 7LL;
const long double eps = 1e-9;
const int N = (2e5+5);
int cache[101][101];

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

/*--------------------------------------------------------------------*/
 
int pow(int a,int b){if(!b){return 1;}int ans=pow(a,b/2); ans*=ans; if(b%2){return ans*=a;}return ans;}
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
int add(int a,int b,int m){return (a+b)%m;}
int sub(int a,int b,int m){return ((a-b)%m+m)%m;}
int mul(int a,int b,int m){return ((a%m)*(b%m))%m;}

    struct PairHash {
        template <class T1, class T2>
        std::size_t operator() (const std::pair<T1, T2> &p) const {
            auto h1 = std::hash<T1>{}(p.first);
            auto h2 = std::hash<T2>{}(p.second);
            // Combine the hash values (e.g., using XOR and bit shift)
            return h1 ^ (h2 << 1); 
        }
    };

bool sortrev(const pair<int,int> &a,  const pair<int,int> &b) 
{ 
    // return (a.first < b.first and a.second > b.second); // both pair in sorted mannner
    return (a.first > b.first or a.second<b.second);
}




/*-------------------------| Let's DANCE Babyy |----------------------------*/


void PP() //Preprocess 
{
     
}

bool is_possible(map<char, int>& ft, char cur) {
    char mode = cur;
    int total_left_to_fill = 0;
    for (auto& [ch, f] : ft) {
        if (f > ft[mode])
            mode = ch;
        total_left_to_fill += f;
    }
    return (ft[mode] <= (total_left_to_fill + 1) / 2) && (ft[cur] <= total_left_to_fill / 2);
}

void aman()
{
    string s;
    cin >> s;
    int n = s.length();

    // Create Frequency Map
    map<char, int> ft;
    for (auto ch : s)
        ft[ch]++;

    string ans = "";
    char last = '\0';
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 26; i++) {
            char ch = 'A' + i;
            if (ft[ch] == 0 || ch == last) continue;

            ft[ch]--;
            if (is_possible(ft, ch)) {
                ans.push_back(ch);
                last = ch;
                break;
            } else {
                ft[ch]++;
            }
        }
    }

    if (ans.length() == n)
        cout << ans << nl;
    else
        cout << "-1" << nl;

}   
 
int32_t main()
{
    
    // auto start = std::chrono::high_resolution_clock::now();
    // cerr << fixed << setprecision(10);
    
    // PP();
    IOS tcc;
    return 0;


    
    // auto stop = std::chrono::high_resolution_clock::now(); 
    // auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    // cerr << fixed << setprecision(9)<< "TT : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;
    return 0;
}
/* LOVE
 
Why I am so lonely??
                           ......There'll be a day, I'll be loved, I'll be admired


//  :> "Only the one who stayed awake at night Knows, How long it may take many years for actual morning to Come."
//  :> We become what we think or admire about! Thoughts control feelings. Feelings control actions.
         Damn.. just became philosopher 

take yourself on dates.

Gloden Rules:-
solutions are simple
proofs are simple
implementations are simple


*/
