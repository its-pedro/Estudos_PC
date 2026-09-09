#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    int cases, size, i, flag, win;

    cin >> cases;
    while(cases--){
        cin >> size;
        vi duel(size);

        cin >> duel[0];
        flag = 0;
        win = duel[0];
        for(i = 1; i < size; i++){
            cin >> duel[i];
            win += duel[i];

            if(duel[i] == 0 and duel[i-1] == 0){
                flag = -1;
            }
        }
        if(flag != -1 && win < size){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

        duel.clear();
    }
    return 0;
}