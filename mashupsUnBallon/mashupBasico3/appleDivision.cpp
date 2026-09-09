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

void comparaDifs(vector<ll> &g1, vector<ll> &g2, ll value){
    ll minDif, dif, i;
    minDif = abs(g2[0] - g1[0]);

    //tentar passar elementos de 2 para 1
    for(i = 1; i < g2.size(); i++){
        dif = abs(g2[0] - g1[0] - 2*g2[i]);
        if(minDif > dif){
            g2[0] -= g2[i];
            g1[0] += g2[i];
            g1.pb(g2[i]);
            g2.erase(g2.begin()+i);
            minDif = dif;
            cout << "g = " << minDif << endl;
        }
    }

    //tentar passar elementos de 1 para 2
    for(i = 1; i < g1.size(); i++){
        dif = abs(g1[0] - g2[0] - 2*g1[i]);
        if(minDif > dif){
            g2[0] += g1[i];
            g1[0] -= g1[i];
            g2.pb(g1[i]);
            g1.erase(g1.begin()+i);
            minDif = dif;
            cout << "l = "<<  minDif << endl;
        }
    }
    
    if(minDif != value)
        comparaDifs(g1, g2, minDif);
    
}

int main(){
        FASTIO
    int size, i, j; cin >> size;
    vector<ll> peso(size),grupo1, grupo2;
    for(i = 0; i < size; i ++) cin >> peso[i];
 
    sort(peso.begin(), peso.end());
 
    int ref = 2;
    //inicializa os vetores para armazenar os pesos e na posicao 0
    //insere a soma dos elementos do vetor
    grupo1.pb(peso[size-1]);
    grupo1.pb(peso[size-1]);
    grupo2.pb(0);

    for(i = size-2; i >= 0; i--){
        if(ref == 2){
            if(grupo2.back() + peso[i] > grupo1[0]){
                ref = 1;
                grupo2.pb(peso[i]);
                grupo2[0] += peso[i];
                comparaDifs(grupo1, grupo2, abs(grupo1[0] - grupo2[0]));
            }else{
                grupo2.pb(peso[i]);
                grupo2[0] += peso[i];
            }
        }else if(ref == 1){
            if(grupo1.back() + peso[i] > grupo2[0]){
                ref = 2;
                grupo1.pb(peso[i]);
                grupo1[0] += peso[i];
                comparaDifs(grupo1, grupo2, abs(grupo1[0] - grupo2[0]));
            }else{
                grupo1.pb(peso[i]);
                grupo1[0] += peso[i];
            }
        }
    }
    comparaDifs(grupo1, grupo2, abs(grupo1[0] - grupo2[0]));

    for(i = 0; i < grupo1.size(); i++){
        cout <<grupo1[i] << ' ';
    }
    cout << endl;
    for (i = 0; i < grupo2.size(); i++){
        cout << grupo2[i] << ' ';
    }
    cout << endl;
    cout << abs(grupo1[0] - grupo2[0]) << endl;

    return 0;
}