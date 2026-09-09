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

bool procuraValor(vector<ll> &array, int size, ll valor){
    for(int i = 0; i < size; i++){
        if(array[i] == valor){
            return true;
        }
    }
    return false;
}

int main(){
    FASTIO
    vector<ll> array(7);
    int cases, aInd, bInd, cInd, i ; cin >> cases;
    ll a, b, c;

    while(cases > 0){
        for(i = 0; i < 7; i++)
            cin >> array[i];

        //encontrar a
        a = array[6] - array[5];

        for(i = 0; i < 5; i++){
            if(array[i] - a > 0){
                if(procuraValor(array, 5, (array[i] - a))){
                    b = array[i] - a;
                }
            }
        }
        c = array[6] - a - b;

        cout << a << ' ' << b << ' ' << c << endl;

        cases--;
        array.clear();
    }
    return 0;
}