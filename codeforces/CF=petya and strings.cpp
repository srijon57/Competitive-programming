#include <bits/stdc++.h>
using namespace std;

void solution(int n)
{
	str a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a == b)
		{
			cout << "0" << endl;
			return;
		}
		else if (a[i] > b[i])
		{
			cout << "1" << endl;
			return;
		}
		else if( a[i]<b[i])
		{
			cout << "-1" << endl;
			return;
		}
	}
}
/* Main()  function */
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T = 1, tc = 0;
	//cin >> T;
	while (T--) {
		solution(++tc);

	}
	return 0;
}
