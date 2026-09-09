#include <iostream>

using namespace std;

int main(){
    int rides, nRidesQntd, oneRidePrice, nRidesPrice, rublesSpent = 0;
    
    cin >>  rides >> nRidesQntd >> oneRidePrice >> nRidesPrice;

    while(rides != 0){
        if(nRidesQntd <= rides){
            if(nRidesQntd*oneRidePrice > nRidesPrice)
                rublesSpent += nRidesPrice;
            else
                rublesSpent += (nRidesQntd*oneRidePrice);
            rides -= nRidesQntd;
        }else{
            if(nRidesPrice > oneRidePrice*rides)
                rublesSpent += (oneRidePrice*rides);
            else
                rublesSpent += nRidesPrice;
            rides = 0;
        }
    }
    cout << rublesSpent;

    return 0;
}