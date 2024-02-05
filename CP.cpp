#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
#define rbtrees tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<":"; _print(x); cerr << endl;
#define debug2(x,y) cerr << #x <<":"; _print(x);cerr<<" "<< #y <<":";_print(y); cerr<< endl;
#else
#define debug(x);
#define debug2(x,y);
#endif
#define w(t)int t;cin >> t;while (t--)
// #define mp make_pair
#define loop(k, n) for (int k = 0; k < n; k++)
#define Loop(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define itr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define MOD 1000000007
 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<long long int,long long int> pll;
typedef unsigned long long ull;
typedef long double lld;
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}vl fac;
ll power(ll a, ll n){a = a % MOD;ll res = 1;while (n > 0){if (n & 1)res = (res * a) % MOD;a = (a * a) % MOD;n = n >> 1;}return res;}
ll modInverse(ll n){return power(n, MOD - 2);}
void fact(ll n){fac = vl(n+1);fac[0] = 1;Loop(i, 1, n + 1)fac[i] = (fac[i - 1] * i) % MOD;}
ll nCr(ll n, ll r){ll res = ((fac[n] * modInverse(fac[n - r])) % MOD * modInverse(fac[r])) % MOD;return res;}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, modInverse(b), m) + m) % m;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
vector<ll> factor(ll n){vector<ll> res;for(ll i=1;i*i<=n;i++){if(n%i==0){res.push_back(i);if(i!=n/i)res.push_back(n/i);}}return res;}


int main(){
    fastio();
    int n=1234;
    cout<<n<<'\n';
    
}