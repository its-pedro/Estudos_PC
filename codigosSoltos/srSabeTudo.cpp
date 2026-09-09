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
    vi skil1, skil2, skil3;
    int cases, books, time, i, code;

    cin >> cases;
    while(cases > 0){
        cin >> books;

        for(i = 0; i < books; i++){
            cin >> time >> code;
            //cout << "codigo = " << code << " tempo = " << time << '\n';
            
            if(code == 11)
                skil3.pb(time);
            else if(code == 01)
                skil2.pb(time);
            else if(code == 10)
                skil1.pb(time);
        }
    
        sort(skil1.begin(), skil1.end());
        sort(skil2.begin(), skil2.end());
        sort(skil3.begin(), skil3.end());

        //cout << "size 1 = " << skil1.size() << " size 2 = " << skil2.size() << " size 3 = " << skil3.size() << '\n';

        if(skil3.empty()){
            if(skil2.empty() || skil1.empty())
                cout << -1 << '\n';
            else
                cout << skil2[0] + skil1[0] << '\n';
        }else{
            if(skil2.empty() || skil1.empty())
                cout << skil3[0] << '\n';
            else if(skil1[0] + skil2[0] > skil3[0])
                cout << skil3[0] << '\n';
            else
                cout << skil2[0] + skil1[0] << '\n';
        }
        cases--;
        skil1.clear();
        skil2.clear();
        skil3.clear();
    }
    return 0;
}