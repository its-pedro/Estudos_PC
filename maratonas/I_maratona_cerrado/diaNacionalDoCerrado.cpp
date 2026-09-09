#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tll tuple<ll,ll,ll>
#define pb push_back
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;



int main(){
    FASTIO
    ll valor, placasVerdes = 0, i = 0;
    vector<tll> m3_m5_m15;

    cin >> valor;
    m3_m5_m15.pb(make_tuple(valor/3, valor/5, valor/15));
    placasVerdes = valor + get<0>(m3_m5_m15.back()) + get<1>(m3_m5_m15.back())  - get<2>(m3_m5_m15.back());
    cout << placasVerdes <<  ' ' << get<0>(m3_m5_m15.back()) <<  ' ' << get<1>(m3_m5_m15.back()) <<  ' ' << get<2>(m3_m5_m15.back()) <<  ' ' << endl;

    while(placasVerdes - ((placasVerdes/3)) - (placasVerdes/5) + (placasVerdes/15) != valor){        
        m3_m5_m15.pb(make_tuple((placasVerdes/3) - get<0>(m3_m5_m15.back()), (placasVerdes/5) -  get<1>(m3_m5_m15.back()), (placasVerdes/15) - get<2>(m3_m5_m15.back())));
        placasVerdes += get<0>(m3_m5_m15.back()) + get<1>(m3_m5_m15.back())  - get<2>(m3_m5_m15.back());
        cout << placasVerdes <<  ' ' << placasVerdes/3 <<  ' ' << placasVerdes/5 <<  ' ' << placasVerdes/15 <<  ' ' << endl;
        cout << placasVerdes <<  ' ' << get<0>(m3_m5_m15.back()) <<  ' ' << get<1>(m3_m5_m15.back()) <<  ' ' << get<2>(m3_m5_m15.back()) <<  ' ' << endl;
    }

    cout << placasVerdes << endl;

    return 0;
}