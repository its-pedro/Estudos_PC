#include <iostream>
#include <string>

using namespace std;

int whichIsGreater(string str1, string str2){
    int i;

    for(i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]){
            if(str1[i] - 32 != str2[i] and str1[i] + 32 != str2[i]){
                if(str1[i] <= 'Z')
                    str1[i] -= 'A';
                else
                    str1[i] -= 'a';

                if(str2[i] <= 'Z')
                    str2[i] -= 'A';
                else
                    str2[i] -= 'a';

                if(str1[i] > str2[i])
                    return 1;
                else
                    return -1;
            }
        }
    }
    return 0;
}

int main(){
    string present1, present2;

    cin >> present1 >> present2;
    cout << whichIsGreater(present1,present2);

    return 0;
}