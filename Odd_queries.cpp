#include <bits/stdc++.h>
using namespace std;
 
/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vec vector<int>
#define vecll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define str string
#define fi first
#define se secoend
#define mem(a,n) memset(a,n,sizeof(a))
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
 
/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
 
/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
 
/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
/* Created()  function */
//start from here
void fun(int x)
{
     ll n,q; cin>>n>>q;
    vector<ll>v(n),pre(n,0);
    ll sm=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sm+=v[i];
    }
    pre[0]=v[0];
    for(ll i=1; i<n; i++) pre[i]=v[i]+pre[i-1];
    while(q--){
        ll l,r,k; cin>>l>>r>>k;
        ll kss=pre[r-1]-(pre[l-1]-v[l-1]);
        ll nsm=sm-kss+(r-l+1)*k;
        if(nsm%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
/* Main()  function */
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        fun(t);
    }
    return 0;
}//https://mirror.codeforces.com/contest/1807/problem/D