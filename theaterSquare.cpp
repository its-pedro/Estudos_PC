#include <iostream>

using namespace std;

int main(){
    long long int largura, altura, flag, flagHorizontal, flagVertical;

    cin >> largura >> altura >> flag;

    flagHorizontal = ((largura - (largura % flag))/flag);
    flagVertical = ((altura - (altura % flag))/flag);

    if(altura%flag != 0)
        flagVertical++;

    if(largura%flag != 0)
        flagHorizontal++;
    
    cout << flagVertical*flagHorizontal;

    return 0;
}