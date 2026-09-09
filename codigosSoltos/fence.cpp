#include <iostream>

using namespace std;
typedef long long int llu;

int main(){
    int largura, piano, *cerca, i, min_index;
    llu soma = 0, min_soma = -1;

    cin >> largura >> piano;
    cerca = (int*)malloc((largura+1)*sizeof(int));

    for(i = 1; i < piano; i++){
        cin >> cerca[i];
        soma += cerca[i];
    }

    for(; i <= largura; i++){
        cin >> cerca[i];
        soma += cerca[i];

        if(soma < min_soma || min_soma == -1){
            min_soma = soma;
            min_index = i - piano + 1;
        }
        soma -= cerca[i - piano + 1];
    }

    cout << min_index;
    free(cerca);
    return 0;
}