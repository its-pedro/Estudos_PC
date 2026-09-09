#include<iostream>
using namespace std;

int main(){
    int cases, n, ver;
    char caracter[2] = {'#','.'};

    cin >> cases;

    while(cases > 0){
        cin >> n;
        ver = 0;

        for(int i = 0; i < 2*n; i++){
            for(int j = 0; j < n; j++){
                cout << caracter[ver] << caracter[ver];

                if(caracter[ver] == '#')
                    ver++;
                else
                    ver--;
            }

            if(n % 2 == 0){
                if(i % 2 == 1){
                    if(caracter[ver] == '#')
                        ver++;
                    else
                        ver--;
                }
            }else{
                if(i % 2 != 1){
                    if(caracter[ver] == '#')
                        ver++;
                    else
                    ver--;
                }
            }
            cout << '\n';
        }
        cases--;
    }
    return 0;
}