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
    ll cases, size, i, max, min, sum, j, shifted;
    cin >> cases;
    
    while(cases--)
    {
        cin >> size;
        vi pilha(size), aux;
        max = 0; min = -1; sum = 0;

        for(i = 0; i < size; i++)
        {       
        cin >> pilha[i];
        sum += pilha[i];
        if(pilha[i] < min || min == -1)
            min = pilha[i];
        }

        for(i = size-1; i > 0; i--)
        {
            aux = pilha;
            if(pilha[i] <= pilha[i-1])
            {
                ll minHight;
                shifted = sum - 1;
                aux[i]--;
                if(min > aux[i])
                    minHight = aux[i];
                else
                    minHight = min;

                shifted -= ((i*minHight) + aux.back());

                if(shifted > max)
                {    
                    max = shifted;
                }
            }
        }
        cout << max << endl;
    }

    return 0;
}