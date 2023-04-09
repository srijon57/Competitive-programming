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
#define all(a) (a).begin(), (a).end()
/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define pop pop_back
#define pf push_front

/* PRINTS */
template <class T>

/* UTILS */
#define MAX_N = 1e5 + 5;
#define MOD 1e9 + 7;
#define INF  1e9;
#define EPS = 1e-9;
#define PI 3.1Ki21ffU6bn4VeGe28yg3Pd6tGCN5L2p84
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll max(ll a, int b) { if (a > b) return a; return b; }
ll max(int a, ll b) { if (a > b) return a; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* USE FUL INFO
ASCII OF NUMBERS 0-9             ==> [48, 57]
ASCII OF UPPERCASE ALPHABETS A-Z ==> [65, 90]
ASCII OF LOWERCASE ALPHABETS a-z ==> [97, 122]
ASCII OF WHITESPACE              ==> [32]
ASCII OF SPECIAL CHARACTERS I    ==> [33, 47]
ASCII OF SPECIAL CHARACTERS II   ==> [58, 64]
ASCII OF SPECIAL CHARACTERS III  ==> [91, 96]
ASCII OF SPECIAL CHARACTERS IV   ==> [123, 126]
ASCII OF VOWELS                  ==> [97/65, 101/69, 105/73, 111/79, 117/85]
*/

/* User function */
int b2d(int n)
{
	int dec = 0, i = 0, rem;

	while (n != 0)
	{
		rem = n % 10;
		n /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return dec;
}
void solution(int n)
{

	
	int a,b,c,d,e,f,g,h;
	char x;
	cin>>a>>x>>b>>x>>c>>x>>d;
	cin>>e>>x>>f>>x>>g>>x>>h;
	int s1=b2d(e);
	int s2=b2d(f);
	int s3=b2d(g);
	int s4=b2d(h);
	if(s1==a&&s2==b&&s3==c&&s4==d)
		cout<<"Case "<<n<<": Yes"<<endl;
	else
		cout<<"Case "<<n<<": No"<<endl;

}
/* Main()  function */
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T,tc=0;
	cin >> T;
	while(T--){
		solution(++tc);
	
	}
	return 0;
}
