#include <iostream>

using namespace std;

int main(){
    int cases, num, size;

    cin >> cases;
    while(cases > 0){
        int qntdEven = 0, qntdOdd = 0, i;
        cin >> size;

        for(i = 0; i < size; i++){
            cin >> num;

            if(num % 2 == 0)
                qntdEven++;
            else
                qntdOdd++;
        }
        if(qntdOdd % 2 == 1)
            cout << "NO\n";
        else
            cout << "YES\n";

        cases--;
    }
    return 0;
}