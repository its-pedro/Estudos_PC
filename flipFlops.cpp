#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int llu;

int main(){
    int cases, qntd, i;
    llu counter, combat, flipFlops, *monster;

    cin >> cases;
    while(cases > 0){
        cin >> qntd >> combat >> flipFlops;
        monster = (llu*)malloc(qntd*sizeof(llu));
        
        for(i = 0; i < qntd; i++){
            cin >> monster[i];
        }
        sort(monster, monster + qntd);

        for(i = 0; i < qntd; i++){
            if(monster[i] > combat)
                break;
            else if(monster[i] == combat){
                combat += monster[i];
            }else{
                if(flipFlops != 0){
                    counter = combat - monster[i];

                    if(counter <= flipFlops){
                        combat += monster[i] + counter;
                        flipFlops -= counter;
                    }else{
                        combat += monster[i] + flipFlops;
                        flipFlops = 0;
                    }

                }else{
                    combat += monster[i];
                }
            }
        }

        cout << combat << '\n';
        free(monster);
        cases--;
    }

    return 0;
}