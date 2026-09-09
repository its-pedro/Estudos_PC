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
    int cases, size, i, flagNeg, flagZero;
    vector<ll> negative;
    ll sum, numero, minPos;

    cin >> cases;
    while(cases > 0){
        cin >> size;
        sum = 0;
        flagNeg = 0;
        flagZero = 0;
        minPos = 1000000001;

        for(i = 0; i < size; i++){
            cin >> numero;
            if(numero == 0){
                flagZero++;
            }else if(numero < 0){
                flagNeg++;
                negative.pb(numero);
            }else{
                sum += numero;
                if(numero <= minPos){
                    minPos = numero;
                }
            }
        }

       if(flagZero > 0 || flagNeg % 2 == 0){
            for(ll val : negative)
                sum += abs(val);

       }else if(flagNeg % 2 == 1){
            sort(negative.begin(), negative.end());
            
            for(i = 0; i < negative.size()-1; i++)
                sum += abs(negative[i]);

            if(abs(negative[i]) > minPos){
                sum -= (negative[i]);
                sum -= minPos;
            }else{
                sum += negative[i];
            }
       }
        cout << sum << endl;
        negative.clear();
        cases--;
    }
    return 0;
}