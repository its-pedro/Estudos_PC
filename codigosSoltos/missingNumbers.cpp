#include<iostream>
using namespace std;

int main(){
    //Alternativa nao tao eficiente
    int cases, num, *sequel, i;

    cin >> cases;
    sequel = (int*) calloc((cases + 1), sizeof(int));

    //complexidade de tempo big-O(cases)
    //complexidade de memoria big-O(cases)
    for(i = 1; i < cases; i++){
        cin >> num;
        sequel[num] ++;
    }

    for(i = 1; i <= cases; i++){
        if(sequel[i] == 0){
        cout << i;
        break;
        }
    }
    
    /*alternativa eficiente
    int cases, i, num;
    long long int sum;

    cin >> cases;

    sum = ((cases*(cases + 1))/2);

    for(i = 1; i < cases; i++){
        cin >> num;
        sum -= num;
    }

    cout << sum; 
    */
    return 0;
}

