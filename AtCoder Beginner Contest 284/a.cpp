#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;

#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

void solve()
{
	int n; cin >> n;

	vector<string> s(n);

	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

	for(int i = n - 1; i >= 0; i--){
		cout << s[i] << endl;
	}


}


int main()
{
	bismillah();

	int t = 1;

	//cin >> t;	

	while(t--){
		solve();
	}

}


