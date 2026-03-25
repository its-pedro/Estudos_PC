#include <iostream>

using namespace std;

int main(){
    int friendsHouse;

    cin >> friendsHouse;

    if(friendsHouse % 5 == 0)
        cout << friendsHouse/5;
    else
        cout << (((friendsHouse - (friendsHouse % 5))/5) + 1);
    
    return 0;
}