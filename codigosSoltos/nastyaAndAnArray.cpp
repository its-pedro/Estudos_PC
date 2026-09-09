#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int size, *array, diferent = 0, i;

    cin >> size;
    array = (int*) malloc(size*sizeof(int));

    for(i = 0; i < size; i++){
        cin >> array[i];
        //cout << array[i] << ' ';
    }
    sort(array, array+size);

    if(array[0] == 0)
        diferent = 0;
    else
        diferent = 1;

    for(i = 1; i < size; i++){
        if(array[i] != 0){
            if(array[i] != array[i-1]){
                diferent++;
            }
        }
    }
    cout << diferent;

    free(array);
    return 0;
}
