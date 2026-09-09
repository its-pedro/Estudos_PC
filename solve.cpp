#include<bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define esp ' '
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    FASTIO
    ll t = 1; cin >> t;
    while(t--){
        ll x, y, k; cin >> x >> y >> k;
        ll proj = 0, dif = y - x;

        while(k > 0 and x <= dif){
            proj += dif % x;
            x++; k--;
        }

        if(k > 0) 
            proj += dif*k;
        
        cout << proj << endl;
    }
    return 0;
}



