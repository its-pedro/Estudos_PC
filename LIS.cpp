#include <bits/stdc++.h>
 
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
using namespace std;

int main()
{
    //solucao em O(n log(n))
    FASTIO
    int size; cin >> size;
    vll array(size), aux;

    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
        auto pos = lower_bound(aux.begin(), aux.end(), array[i]);
        if(pos == aux.end())
            aux.push_back(array[i]);
        else
            aux[pos-aux.begin()] = array[i];
    }
    
    cout << aux.size() << endl;

    return 0;
}
