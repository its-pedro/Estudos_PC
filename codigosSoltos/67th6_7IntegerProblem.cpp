#include <iostream>

using namespace std;

int main(){
    int cases, num, max, sum, i, min;
    cin >> cases;

    while(cases > 0){
        max = -68;
        sum = 0;

        for(i = 0; i < 7; i++){
            cin >> num;
            sum += num;

            if(num > max)
                max = num;
        }

        sum -= max;
        cout << max-sum << '\n';
        cases--;
    }
    return 0;
}