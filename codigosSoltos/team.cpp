#include <iostream>
using namespace std;

int main(){
    int cases, i, petya, vasya, tanya, questionsSolved = 0;

    cin >> cases;

    for(i = 0; i < cases; i++){
        cin >> petya >> vasya >> tanya;

        if((petya + vasya + tanya) >= 2)
            questionsSolved++;
    }
    cout << questionsSolved;

    return 0;
}