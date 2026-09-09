#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    FASTIO
    int i, j, indexC, indexL, minPath;

    char ** matrix = (char **) malloc(5*sizeof(char*));
    for(i = 0; i < 5; i++) 
        matrix[i] = (char*) malloc(5*sizeof(char));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> matrix[i][j];

            if(matrix[i][j] == '1'){
                indexL = i; 
                indexC = j;
            }
        }
    }
    minPath = abs(2 - indexL) + abs(2 - indexC);
    cout << minPath << endl;

    for(i = 0; i < 5; i++) 
        free(matrix[i]);
    free(matrix);
    
    return 0;
}