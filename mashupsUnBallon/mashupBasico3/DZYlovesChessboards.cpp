#include <bits/stdc++.h>
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    int linhas, colunas, i, j; cin >> linhas >> colunas;
    char table;

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            cin >> table;
        
            if(table == '.'){
                if((i + j) % 2 == 0) table = 'B';
                else table = 'W';
            }
            cout << table;
        }
        cout << endl;
    }

    return 0;
}