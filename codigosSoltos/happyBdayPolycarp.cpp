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
    ll cases, num, counter, iterations, inc;

    cin >> cases;
    while(cases--){
        cin >> num;
        counter = 1;
        iterations = 0;
        inc = 1;

        if(num < 10){
            cout << num << endl;
        }else{
            while(1){
                if(counter > num) break;
                //cout << counter << ' ';
                if(counter % 10 != 9){
                    counter += inc;
                }else{
                    counter += (inc + 1);
                    inc = ((10*inc) + 1);
                }
                iterations++;
            }
            cout << iterations << endl;
        }
    }

    return 0;
}