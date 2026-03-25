#include <iostream>
#include <string>

using namespace std;

int main(){
    string user;
    int i, *letter, position, diferentCharacters = 0;

    cin >> user;
    letter = (int*)calloc(26, sizeof(int));

    for(i = 0; i < user.length(); i++){
        position = user[i] - 'a';
        letter[position] = 1;
    }

    for(i = 0; i < 26; i++){
        diferentCharacters += letter[i];
    }

    if(diferentCharacters % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    free(letter);
    return 0;
}