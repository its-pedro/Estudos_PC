#include <iostream>
#include <string>

using namespace std;

int countingCalories(int a1, int a2, int a3, int a4, string sequence){
    int calories, i;

    calories = 0;
    for(i = 0; i < sequence.length(); i++){
        if(sequence[i] == '1')
            calories += a1;
        else if(sequence[i] == '2')
            calories += a2;
        else if(sequence[i] == '3')
            calories += a3;
        else if(sequence[i] == '4')
            calories += a4;
    }
    return calories;
}

int main(){
    int cal1, cal2, cal3, cal4;
    string blackSquares;

    cin >> cal1 >> cal2 >> cal3 >> cal4;
    cin >> blackSquares;
    cout << countingCalories(cal1, cal2, cal3, cal4, blackSquares);

    return 0;
}