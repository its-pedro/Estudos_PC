#include <iostream>
#include <string>

using namespace std;

int main(){
    string palavra;
    int i;
    
    cin >> palavra;

    for(i = 0; i < palavra.length(); i++){
        if(palavra[i] != 'A' and palavra[i] != 'E' and palavra[i] != 'I' and palavra[i] != 'O' and palavra[i] != 'U' and palavra[i] != 'Y' and palavra[i] != 'a' and palavra[i] != 'e' and palavra[i] != 'i' and palavra[i] != 'o' and palavra[i] != 'u' and palavra[i] != 'y'){
            if(palavra[i] <= 'Z'){
                palavra[i] += 32;
            }
            cout << '.' << palavra[i];
        }
    }
    return 0;
}