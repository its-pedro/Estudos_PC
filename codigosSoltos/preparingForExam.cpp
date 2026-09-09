#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define vi vector<int>
using namespace std;

int main(){
    ll cases, n, m, k, i, j, sumN, sumQ, dif, q;

    cin >> cases;
    while(cases > 0){
        cin >> n >> m >> k;
        vi a(m);
        sumN = ((n*(n+1))/2);
        sumQ = 0;

        for(i = 0; i < m; i++)
            cin >> a[i];
        for(i = 0; i < k; i++){
            cin >> q;
            sumQ += q;
        }

        for(i = 0; i < m; i++){
            if(k == n){
                cout << 1;
            }
            else if(n > k+1){
                cout << 0;
            }
            else{
                dif = (sumN - sumQ);
                if(a[i] == dif)
                    cout << 1;
                else
                    cout << 0;
            }
        }
        cout << endl;        
        cases--;
        a.clear();
    }

    return 0;
}