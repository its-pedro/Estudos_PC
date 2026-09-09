#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    int socks, bought, days = 1;
    cin >> socks >> bought;

    while(true){
        socks--;
        if(days % bought == 0 && days != 0) socks++;
        if(socks == 0) break;
        days++;
    }
    cout << days << endl;

    return 0;
}