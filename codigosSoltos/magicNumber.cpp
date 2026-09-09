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
    //FASTIO
    string numero; 
    cin >> numero;
    int counter = 0;

    while(numero[counter] != '\0'){
        if(numero[counter] == '1'){
            if(numero[counter + 1] == '4'){
                if(numero[counter + 2] == '4'){
                    counter += 3;

                }else{
                    counter += 2;
                }

            }else{
                counter += 1;
            }
        }else{
            counter = -1;
            break;
        }
    }
    
    if(counter == -1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}