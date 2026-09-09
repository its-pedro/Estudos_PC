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
    int sizeA, sizeB, i, j;

    cin >> sizeA;
    vi a(sizeA);
    for(i = 0; i < sizeA; i++)
        cin >> a[i];
    
    cin >> sizeB;
    vi b(sizeB);
    for(i = 0; i < sizeB; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << a.back() << ' ' << b.back() << endl;
    return 0;
}