#include<iostream>

using namespace std;

int main(){
    int g1 = 0, g2 = 0, g3 = 0, taxi = 0, cases, num, counter = 0;

    cin >> cases;
    while(cases > 0){
        cin >> num;
        if(num == 1)
            g1++;
        else if(num == 2)
            g2++;
        else if(num == 3)
            g3++;
        else if (num == 4){
            taxi++;
        }
        cases--;
    }

    if(g3 >= g1){
        taxi += g3;
        if(g2 % 2 == 0){
            taxi += (g2/2);
        }
        else{
            taxi += ((g2-1)/2) + 1;
        }         
    }else{
        g1 -= g3;
        taxi += g3;

        if(g2 % 2 == 0){
            taxi += (g2/2);
        }
        else{
            taxi += ((g2-1)/2);
            counter += 2;
        }
        while(1){
            if(g1 != 0){
                counter++;
                g1--;
                if(counter == 4){
                    counter = 0;
                    taxi++;
                }
            }else{
                if(counter != 0){
                    taxi++;
                }
                break;
            }
        } 
    }
    cout << taxi;

    return 0;
}