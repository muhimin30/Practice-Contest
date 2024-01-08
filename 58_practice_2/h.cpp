#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
  bismillah();
  int t, k; cin >> t >> k;

  int cnt = 0;

  while(t--){
    string s; cin >> s;
    int sz = s.size();

    set<int> ans;

    for(int i = 0; i < sz; i++){
      if(s[i] - '0' <= k){
        ans.insert(s[i] - '0');
      }
    }
    //cout << ans.size() << endl;;

    if(ans.size() == k + 1){
      cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}
