#include <iostream>
#include <string>

using namespace std;

int main(){
    int cases, size, *alphabeth, balloons;
    string sequel;

    cin >> cases;
    while(cases > 0){
        cin >> size;
        cin >> sequel;
        balloons = 0;
        alphabeth = (int*)calloc(26, sizeof(int));

        for(int i = 0; i < size; i++){
            if(alphabeth[sequel[i] - 'A'] == 0){
                alphabeth[sequel[i] - 'A'] = 1;
                balloons += 2;
            }else
                balloons++;
        }
        cout << balloons << '\n';

        free(alphabeth);
        cases--;
    }
}