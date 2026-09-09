#include<iostream>

using namespace std;

int main(){
    int size, i, j, erro = 0;
    char **Nlogolonia;

    cin >> size;
    Nlogolonia = (char**) malloc(size*sizeof(char*));

    for(i = 0; i < size; i++){
        Nlogolonia[i] = (char*) malloc(size*sizeof(char));

        for(j = 0; j < size; j++){
            cin >> Nlogolonia[i][j];
        }
    }

    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(Nlogolonia[i][j] != Nlogolonia[j][i])
                erro = -1;
        }
    }

    if(erro == -1)
        cout << "Nao";
    else
        cout << "Sim";
        
    for(i = 0; i < size; i++){
        free(Nlogolonia[i]);
    }
    free(Nlogolonia);
}