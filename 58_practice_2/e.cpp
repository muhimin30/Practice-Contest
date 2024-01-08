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
    
    vector<string> color;

    for(int i = 0; i < 8; i++){
        string temp; cin >> temp;
        color.push_back(temp);
    }

    bool check = true;

    for(int i = 0; i < 8; i++){
        int r = 0;
        for(int j = 0; j < 8; j++){
            if(color[i][j] == 'R'){
                r++;
            }
        }

        if(r == 8){
            cout << 'R' << endl;
            return;
        }
    }

    for(int i = 0; i < 8; i++){
        int b = 0;
        for(int j = 0; j < 8; j++){
           if(color[j][i] == 'B'){
                b++;
            } 
        }
        if(b == 8){
            cout << 'B' << endl;
            return;
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


