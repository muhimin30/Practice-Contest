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
	vector<pair<int, int>> a(n);
	vector<pair<int, int>> b(n);
	vector<pair<int, int>> c(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	for(int i = 0; i < n; i++){
		cin >> b[i].first;
		b[i].second = i + 1;
	}
	for(int i = 0; i < n; i++){
		cin >> c[i].first;
		c[i].second = i + 1;
	}
	
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	sort(c.rbegin(), c.rend());

	vector<ll> ans;
	// for(int i = 0; i < 3; i++){
	// 	cout << a[i].first << ' ' << a[i].second << endl;
	// }
	// for(int i = 0; i < 3; i++){
	// 	cout << b[i].first << ' ' << b[i].second << endl;
	// }
	// for(int i = 0; i < 3; i++){
	// 	cout << c[i].first << ' ' << c[i].second << endl;
	// }

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 3; k++){
				if(a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second){
					ans.push_back(1LL * a[i].first + b[j].first + c[k].first);
				}
				// if(a[i].first + b[j].first + c[k].first == 21){
				// 	cout << a[i].first << ' ' << b[j].first << ' ' << c[k].first << endl;
				// }
			}
		}
	}

	sort(ans.begin(), ans.end());

	cout << ans.back() << endl;

	// cout << endl;

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


