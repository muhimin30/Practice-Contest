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

	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){
			for(int k = 0; k <= n; k++){
				if(i + j + k <= n){
					cout << i << ' ' << j << ' ' << k <<endl; 
				}
			}
		}
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


