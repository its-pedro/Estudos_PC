#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    ll size, diferent = 0; cin >> size;
    string S, T;

    cin >> S >> T;
    for(int i = 0; i < size; i++)
        if(S[i] != T[i]) diferent++;

    cout << diferent << endl;

    return 0;
}