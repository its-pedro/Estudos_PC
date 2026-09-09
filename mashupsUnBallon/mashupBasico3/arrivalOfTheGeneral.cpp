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
    ll size, indexMax = 0, indexMin = 0, i, min, max, swaps = 0;
    cin >> size;
    vi soldier(size);
    cin >> soldier[0];
    max = soldier[0];
    min = soldier[0];

    for(i = 1; i < size; i++){
        cin >> soldier[i];

        if(soldier[i] > max){
            max = soldier[i];
            indexMax = i;
        }
        if(soldier[i] <= min){
            min = soldier[i];
            indexMin = i;
        }
    }
    size--;
    swaps += (size - indexMin);
    swaps += indexMax;
    if(indexMin < indexMax) swaps--;

    cout << swaps << endl;

    return 0;
}