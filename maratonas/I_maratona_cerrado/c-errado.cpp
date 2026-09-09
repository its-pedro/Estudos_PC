#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    string frase;

    while(getline(cin, frase)){
        ll i;

        for(i = 0; i < frase.size(); i++){
            if(frase[i] == 'C'){
                if(frase[i+1] == '-'){
                    cout << "-se";
                }else if(frase[i-1] <= 'z' && frase[i-1] >= 'a' || frase[i-1] <= 'Z' && frase[i-1] >= 'A'){
                    if(frase[i+1] > 'z' || frase[i+1] < 'a' && frase[i+1] > 'Z'|| frase[i+1] < 'A'){ 
                        cout << "-se";
                    }else{
                        cout << frase[i];
                    }
                }else{
                    cout << frase[i];
                }
            }else{
                cout << frase[i];
            }
        }
        cout << endl;
    }
    return 0;
}