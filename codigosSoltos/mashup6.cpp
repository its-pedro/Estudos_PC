#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    ll begin, target; cin >> begin >> target;

    if(begin > target)
    {
        cout << begin - target << endl;
    }
    else
    {
        ll val = target, press = 0;
        while(1)
        {
            if(val == begin)
            {
                cout << press << endl;
                break;
            }

            if(val % 2 == 0)
            {
                val /= 2;
            }
            else
            {
                val++;
            } 
            press++;
        }
    }
    return 0;
}