#include <iostream>
#include <string>

using namespace std;

int main (){
    string word;
    int cases, inBetween;

    cin >> cases;
    while(cases > 0){
        cin >> word;

        if(word.length() <= 10)
            cout << word << '\n';
        else{
            inBetween = word.length() - 2;
            cout << word[0] << inBetween << word[word.length()-1] << '\n';
        }
        cases--;
    }

    return 0;
}