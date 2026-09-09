#include <iostream>

using namespace std;
typedef long long ll;

int bynarySearch(ll alvo, ll *array, ll size){
    ll center, esquerda = 0, direita = size-1;

    while(esquerda <= direita){
        center = (direita + esquerda) / 2;

        if(alvo == array[center]){
            if(center % 2 == 0)
                return ((center+2)/2);
            else
                return ((center+1)/2);

        }else if(alvo < array[center]){
            direita = center - 1;
        }else if(alvo > array[center]){
            esquerda = center + 1;
        }
    }

    if(center % 2 == 0){
        return ((center+2)/2);
    }
    else{
        return ((center+1)/2);
    }
}

int main(){
    ll *pilhas, worm, juicyQntd, size, juicy, i;
    
    cin >> size;
    pilhas = (ll*)malloc(2*size*sizeof(ll));

    for(i = 0; i < size; i++){
        cin >> worm;

        if(i == 0){
            pilhas[2*i] = 1;
            pilhas[2*i + 1] = worm;  
        }else{
            pilhas[2*i] = pilhas[2*i - 1] + 1;
            pilhas[2*i + 1] = pilhas[2*i - 1] + worm;
        }
    }

    cin >> juicyQntd;
    for(i = 0; i < juicyQntd; i++){
        cin >> juicy;
        cout << bynarySearch(juicy, pilhas, 2*size) << '\n';
    }

    free(pilhas);
    return 0;
}