#include <iostream>

using namespace std;

int* crivoErastotenes(int size){
    int *checker = (int*)calloc(size+1, sizeof(int));
    checker[1] = 1;

    for(int i = 2; i <= size; i++){
        for(int j = 2; j*i <= size; j++){
            checker[i*j] = 1;
        }
    }
    return checker;
}

int main(){
    int linhas, colunas, **matrix,**movesToPrime, *primes, moves, maxNum = -1, i, j, minMoves = -1, pos;
    cin >> linhas >> colunas;

    matrix = (int**)malloc(linhas*sizeof(int*));
    movesToPrime = (int**)calloc(linhas,sizeof(int*));

    for(i = 0; i < linhas; i++){
        matrix[i] = (int*)malloc(colunas*sizeof(int));
        movesToPrime[i] = (int*)calloc(colunas,sizeof(int));
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            cin >> matrix[i][j];

            if(matrix[i][j] > maxNum){
                maxNum = matrix[i][j];
            }
        }
    }
    primes = crivoErastotenes(maxNum+150);

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            pos = matrix[i][j];
            if(primes[pos] == 1){
                while(primes[pos] == 1){
                    pos++;
                }
            }
            movesToPrime[i][j] += (pos - matrix[i][j]); 
        }
    }

    for(i = 0; i < linhas; i++){
        moves = 0;
        for(j = 0; j < colunas; j++)
            moves += movesToPrime[i][j];
        if(moves < minMoves or minMoves == -1)
            minMoves = moves;
    }

    for(i = 0; i < colunas; i++){
        moves = 0;
        for(j = 0; j < linhas; j++)
            moves += movesToPrime[j][i];
        if(moves < minMoves or minMoves == -1)
            minMoves = moves;
    }

    cout << minMoves;

    for(i = 0; i < linhas; i++){
        free(matrix[i]);
        free(movesToPrime[i]);
    }
    free(matrix);
    free(movesToPrime);
    
    return 0;
}