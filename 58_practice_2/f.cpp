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
    
    vector<bool> problem(30);

    int n; cin >> n;

    string s; cin >> s;
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int temp = s[i] - 'A';

        if(!problem[temp]){
            cnt += 2;
        }
        else{
            cnt++;
        }

        problem[temp] = true;
    }

    cout << cnt << endl;

}


int main()
{
    bismillah();

    tc
    {
        solve();
    }

}


