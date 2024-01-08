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
  map<char,int> t_size;

  t_size['S'] = 1;
  t_size['M'] = 2; 
  t_size['L'] = 3; 
    
  string a, b; cin >> a >> b;

  int a_len = a.size();
  int b_len = b.size();

  if(a == b){
    cout << '=' << endl;
  }
  else if(t_size[a[a_len - 1]] < t_size[b[b_len - 1]]){
    cout << '<' << endl;
  }
  else if(t_size[a[a_len - 1]] > t_size[b[b_len - 1]]){
    cout << '>' << endl;
  }
  else{
    //cout << "HELLO" << endl;
    if(a[a_len - 1] == 'S' || b[b_len - 1]== 'S'){
      //cout << "HELLO" << endl;
      if(a_len > b_len){
        
        cout << '<' << endl;
      }
      else{
        cout << '>' << endl;
      }
    }
    else if(a[a_len - 1] == 'L' || b[b_len - 1] == 'L'){
      if(a_len > b_len){
        cout << '>' << endl;
      }
      else{
        cout << '<' << endl;
      }
    }
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


