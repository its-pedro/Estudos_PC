#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int swap(int val1, int val2, int a){
    if(a == val1) return val2;
    else return val1;
}

void switchLights(int **panel, int L, int C, int valor){
    if(valor % 2 != 0){
        panel[L][C] = swap(1, 0, panel[L][C]);
        panel[L+1][C] = swap(1, 0, panel[L+1][C]);
        panel[L][C+1] = swap(1, 0, panel[L][C+1]);
        panel[L][C-1] = swap(1, 0, panel[L][C-1]);
        panel[L-1][C] = swap(1, 0, panel[L-1][C]);
    }
}

int main(){
    //FASTIO
    int presses[3][3], i, j;
    int **light = (int**)calloc(5, sizeof(int*));
    for(i = 0; i < 5; i++) light[i] = (int*)calloc(5, sizeof(int));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> presses[i][j];
            light[i+1][j+1] = 1; //padding
        } 
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(presses[i][j] != 0){
                switchLights(light, i+1, j+1, presses[i][j]);
            }
        }
    }
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            cout << light[i][j];
        }
        cout << endl;
    }

    for(i = 0; i < 5; i++) free(light[i]);
    free(light);

    return 0;
}