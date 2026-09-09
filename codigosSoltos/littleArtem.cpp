#include<iostream>
using namespace std;

char swap(char caracter){
    if(caracter == 'W')
        return 'B';
    else
        return 'W';
}

int main(){
    int area, cases, largura, altura, i, j;
    char caracter;

    cin >> cases;
    while(cases > 0){
        cin >> altura >> largura;
        area = altura * largura;

        if(altura % 2 == 0){
            caracter = 'W';
            for(i = 0; i < altura; i++){
                for(j = 0; j < largura; j++){
                    if(i == (altura-2) and j == (largura-1)){
                        cout << 'B';
                    }else
                        cout << caracter;
                }

                caracter = swap(caracter);
                cout << '\n';
            }

        }else{
            for(i = 1; i < altura; i++){
                caracter = swap(caracter);

                for(j = 0; j < largura; j++){
                    cout << caracter;
                }
                cout << '\n';
            }

            caracter = 'B';
            for(i = 0; i < largura; i++){
                cout << caracter;
                caracter = swap(caracter);
            }
            cout << '\n';
        }
        cases--;
    }
    return 0;
}