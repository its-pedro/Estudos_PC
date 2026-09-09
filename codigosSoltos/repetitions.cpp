#include <iostream>
#include <string>
using namespace std;

int main(){
    char lastBase;
    string DNA;
    int maxSize = 0, size = 0, i;

    cin >> DNA;

    for(int i = 0; i < DNA.length(); i++){ // complexidade big-O(tamanho da string)
        if(lastBase == DNA[i] or maxSize == 0){
            size++;
            if(size > maxSize){
                maxSize = size;
            }
        }else{
            size = 1;
        }
        lastBase = DNA[i];
    }
    cout << maxSize;

    return 0;
    }