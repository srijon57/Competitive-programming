#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	char a[t];
	for(int i=0;i<t;i++)
	{
		cin >> a[i];
		if(a[i]=='c'||a[i]=='o'||a[i]=='d'||a[i]=='e'||a[i]=='f'||a[i]=='o'||a[i]=='e'||a[i]=='r'||a[i]=='e'||a[i]=='s')
			cout <<"YES"<<endl;
		else
			cout << "NO"<<endl;
	}
    return 0;
}//https://mirror.codeforces.com/contest/1791/problem/A
