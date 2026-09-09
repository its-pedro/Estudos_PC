#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){
    ll k, n, counter, cases, Kth_integer;

    cin >> cases;
    while(cases > 0){
        cin >> n >> k;
        double gapQntd = double(k)/(double(n-1));
        
        Kth_integer = k;
        Kth_integer += ll(ceil(gapQntd-1));

        cout << Kth_integer << '\n';
        cases--;
    }
    return 0;
}