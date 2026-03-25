#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct usuarios{
    char user[40];
    int size;
    int repet;
};

typedef struct usuarios user;

int main(){
    int cases, registros = 0, size, erro;
    user *lista;

    cin >> cases;
    lista = (user*)malloc(cases*sizeof(user));

    for(int i = 0; i < cases; i++){
        cin >> lista[i].user;
        lista[i].size = strlen(lista[i].user);
        erro = -1;
        lista[i].repet = 0;

        for(int j = 0; j < i; j++){
            if(lista[i].size == lista[j].size){
                if(strcmp(lista[i].user, lista[j].user) == 0){
                    erro = j;
                    lista[j].repet++;
                    break;
                }
            }
        }

        if(erro == -1)
            cout << "OK" << '\n';
        else{
            cout << lista[i].user << lista[erro].repet << '\n';
        }
    }
    return 0;
}