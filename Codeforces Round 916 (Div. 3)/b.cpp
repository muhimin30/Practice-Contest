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
	int n, k; cin >> n >> k;

	vector<int> ans;

	int dif = 1;
	if(k > 0){
		ans.push_back(dif);
		dif++;
	}
	for(int i = 1; i < k; i++){
		ans.push_back(dif);
		dif++;
	}

	for(int i = n; i > k ; i--){
		ans.push_back(i);
	}

	for(auto a: ans) cout << a << ' ';
	cout << endl;

}


int main()
{
	bismillah();

	int t = 1;

	cin >> t;	

	while(t--){
		solve();
	}

}


