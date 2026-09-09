#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    ll cases; cin >> cases;
    while(cases--)
    {
        ll size, i, sets;
        cin >> size;
        vll doll(size);

        for(i = 0; i < size; i++){
            cin >> doll[i];
        }
        sort(doll.begin(), doll.end());
        i = 0;

        while(!doll.empty()){
            if(true){}
        }
    }
    return 0;
}