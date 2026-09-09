#include<bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define pll pair<ll,ll>
#define pi pair<int,int>
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

void dfs(vector<vll> &g, vector<pair<ll, ll>> &v, ll node, ll &flag){

    for(ll x : g[node]){
        if(v[x].second == -1){
            v[x].second = node;
            v[x].first = v[node].first + 1;
            dfs(g, v, x, flag);
        }

        if(v[node].first > v[x].first + 1){ 
            flag = node;
        }
    }
}

void srt(vector<vll> &g, vector<pair<ll, ll>> &v, ll n){
    ll flag = -1;
    for(int i = 0; i < n; i++){
        if(v[i].second == -1){
            v[i].second == 0;
            dfs(g, v, i, flag);
        }

        if(flag != -1){   
            break;
        }
    }
    if(flag == -1) cout << "IMPOSSIBLE" << endl;
    else{
        stack<ll> ans;
        while(v[flag].first != 0){
            ans.push(flag+1);
            flag = v[flag].second;
        }
        ans.push(flag+1);

        cout << ans.size() << endl;
        while(!ans.empty()){
            cout << ans.top() << ' ';
            ans.pop();
        }
        cout << flag << endl;
    }
}



int main()
{
    FASTIO
    ll c, r;
    vector<vll> g(c);

    cin >> c >> r;
    while(r--){
        ll a, b; cin >> a >> b;
        a--; b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    vector<pair<ll, ll>> v (c, mp(0,-1));
    srt(g, v, c);

    return 0;
}