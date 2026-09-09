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

int searchLowest(vector<ll> array, ll value, int index){
    for(int i = array.size()-1; i > 0; i--){
        if(value >= array[i] && i != index){
            return i;
        }
    }
    return -1;
}

int main(){
    FASTIO
    int cases, size, i;
    vector<ll> num;
    ll sum, numero;

    cin >> cases;
    while(cases > 0){
        cin >> size;
        sum = 0;

        for(i = 0; i < size; i++){
            cin >> numero;
            num.pb(numero);
        }

        for(i = 0; i < size; i++){
            if(num[i] <= 0){
               int pos = searchLowest(num, abs(num[i]), i);
               if(pos != -1){
                    num[i] = -num[i];
                    num[pos] =- num[pos];
               }
            }
        }

        for(ll val : num){
            sum += val;
        }

        cout << sum << endl;
        num.clear();
        cases--;
    }
    return 0;
}