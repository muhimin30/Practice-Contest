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

	vi num1(n + 1), num2(n + 1);
	vector<ll> num3(n + 1);

	for(int i = 1; i <= n; i++){
		cin >> num1[i];
		num3[i] = 1LL * num3[i - 1] + num1[i];
	}
	for(int i = 1; i <= n; i++){
		int temp; cin >> temp;

		num2[i] = max(num2[i - 1], temp);
	}

	ll ans1 = 0;

	if(k > n){
		ans1 += num3[n] + (1LL * num2[n] * (k - n));
	}
	else{
		ans1 += num3[k];
	}

	ll ans2 = ans1;

	if(k <= n){
		for(int i = 1; i <= k; i++){
			ll temp;
			temp = num3[i] + (1LL * num2[i] * (k - i));
			//cout << temp << endl;
			ans2 = max(ans2, temp);
		}
	}
	else{
		for(int i = 1; i <= n; i++){
			ll temp;
			temp = num3[i] + (1LL * num2[i] * (k - i));
			//cout << temp << endl;
			ans2 = max(ans2, temp);
		}
	}
	

	cout << ans2 << endl;


	 //for(auto a: num3) cout << a << ' ';
	// cout << endl;
	// for(auto a: num2) cout << a << ' ';
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


