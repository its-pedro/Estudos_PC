#include<iostream>

using namespace std;
typedef long long int llu;

int main(){
    int size, i;
    llu *increasingArray, moves = 0;

    cin >> size;
    increasingArray = (llu*)malloc(size*sizeof(llu));

    for(i = 0; i < size; i++){
        cin >> increasingArray[i];
    }

    for(i = 1; i < size; i++){
        if(increasingArray[i] < increasingArray[i-1]){
            moves += (increasingArray[i-1] - increasingArray[i]);
            increasingArray[i] += (increasingArray[i-1] - increasingArray[i]);
        }
    }
    cout << moves;

    free(increasingArray);
    return 0;
}