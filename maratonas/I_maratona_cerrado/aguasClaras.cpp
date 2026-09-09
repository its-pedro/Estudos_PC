#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define endl '\n'
#define mp make_pair
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    //FASTIO
    ll size, ops, i, mes, up;
    cin >> size >> ops;
    vll altura(size);
    vll delta(size+1,0);

    for(i = 0; i < size; i++)
        cin >> altura[i];

    for(i = 0; i < ops; i++)
    {
        cin >> mes >> up;
        delta[0] += up;
        delta[mes] -= up;
    }

    for(i = 1; i <= size; i++)
        delta[i] += delta[i-1];

    for(i = 0; i < size; i++)
        altura[i] += delta[i];

    stack<ll> monoStack;
    monoStack.push(altura[0]); 
    for(i = 1; i < size; i++)
    {
        cout << monoStack.size() << endl;
        if(altura[i] >= monoStack.top())
        {
            while(altura[i] >= monoStack.top())
            {
                monoStack.pop();
                if(monoStack.empty())
                {
                    break;
                }
            }
        }
        monoStack.push(altura[i]); 
    }
    return 0;
}