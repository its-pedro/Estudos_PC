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
    ll N, sum = 0;

    cin >> N;
    for(int i = 1; i <= N; i++){
        if(i % 2 == 1) sum -= i*i*i;
        else sum += i*i*i;
    }
    
    cout << sum << endl;

    return 0;
}