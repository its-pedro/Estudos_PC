#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int stores, *prices, days, coins, available, i;

    cin >> stores;
    prices = (int*) malloc(stores*sizeof(int));

    for(i = 0; i < stores; i++)
        cin >> prices[i];

    sort(prices, prices + stores);

    cin >> days;

    while(days > 0){
        cin >> coins;

        if(coins >= (prices[stores-1]/2)){
            for(i = stores; i > 0; i--){
                if(coins >= prices[i-1])
                    break;
            }

            cout << i << '\n';
            days--;  
            
        }else{
            for(i = 0; i < stores; i++){
                if(coins < prices[i])
                    break;
            }

            cout << i << '\n';
            days--;              
        }
    }

    free(prices);
    return 0;
}