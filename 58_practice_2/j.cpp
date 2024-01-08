#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;
typedef double dl;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define TC ll t; cin>>t; while(t--)

void solve()
{
  //cout << "HELLO" << endl;
    
  int c, m, x; cin >> c >> m >> x;
  int mn;
  if(c <= m){
    mn = c;
  }
  else{
    mn = m;
  }
  if(mn == 0){
    cout << 0 << endl;
  }
  else{

    int x_cnt;
    if(x <= mn){
      x_cnt = x;
    }
    else{
      x_cnt = mn;
    }
    ll sum = 1LL * c + m + x_cnt;
    int team = sum / 3;

    int ans = min(team, mn);

    //cout << sum << " " << mn << endl

    cout << ans << endl;
  }

}


int main()
{
    bismillah();

    tc
    {
        solve();
    }

}


