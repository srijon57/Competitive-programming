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
#define se second
#define mem(a,n) memset(a,n,sizeof(a))
#define All(a) (a).begin(), (a).end()
#define precise(n) fixed << setprecision(n)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define Timecount "Time Taken: "<<(float)clock()/CLOCKS_PER_SEC <<" secs\n"

/* FUNCTIONS */
#define FORP(i,s,e) for(long long int i=s;i<e;i++)
#define FORM(i,s,e) for(long long int i=s;i<e;i--)
#define FORE(i,s,e) for(long long int i=s;i<=e;i++)
#define pb push_back
#define eb emplace_back
#define pop pop_back
#define pf push_front
#define endl "\n"
#define AUTO(v) for (auto &it: v)
#define FORi(n) for (int i=0; i<n; i++)
#define FORj(n) for (int j=0; j<n; j++)
#define Yes cout <<"Yes\n";
#define No  cout <<"No\n";
#define space " "

/* PRINTS */
template <class T>

/* UTILS */
#define MAX_N = 1e5 + 5;
#define MOD 1e9 + 7;
#define INF 0x3f3f3f3f
#define EPS = 1e-9;
#define PI 3.14159265358979323846
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll max(ll a, int b) { if (a > b) return a; return b; }
ll max(int a, ll b) { if (a > b) return a; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32; return a; }
string to_lower(string a) { for (int i = 0; i < (int)a.length(); i++) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32; return a; }
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void Case(int tc) { cout << "Case " << tc << ": \n";}

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

void solution(int testcase)
{
	int n,count=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j])
				count++;
		}
	}
	cout<<count<<endl;

}
/* Main()  function */
int main()
{
	FAST;
	int T = 1, tc = 0;
	//cin >> T;
	while (T--) {
		solution(++tc);
	}
	return 0;
}
