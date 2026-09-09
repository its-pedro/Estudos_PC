#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    string canto;

    cin >> canto;
    sort(canto.begin(), canto.end());
    cout << canto << endl;

    return 0;
}