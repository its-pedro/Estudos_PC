#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int llu;

int main(){
    int cases, size, i, j, *test;
    llu *array;

    cin >> cases;
    while(cases > 0){
        cin >> size;
        array = (llu*) malloc(size*sizeof(llu));

        for(i = 0; i < size; i++)
            cin >> array[i];

        for(i = 0; i < size-1; i++){
            test = (int*)calloc(3, sizeof(int));

            for(j = i+1; j < size; j++){
                if((array[i] + array[j]) % 2 == 0 and array[i] + array[j] < (array[i] - array[j]))
                    test[0]++;
                if(array[i] > array[j])
                    test[1]++;
                if(array[i] < array[j])
                    test[2]++;
            }
        /*if(i == 0){
            for(int k = 0; k < 3; k++){
                cout << test[k] << ' '; 
            }
            cout << '\n';
        }*/
        sort(test, test+3);
        cout << test[2] << ' ';
        free(test);
        }
        cout << "0" << '\n';
        free(array);
        cases--;
    }

    return 0;
}