#include <iostream>

using namespace std;

int main(){
    int cases, x, y, z, forceX = 0, forceY = 0, forceZ = 0;

    cin >> cases;

    for(int i = 0; i < cases; i++){
        cin >> x >> y >> z;
        forceX += x;
        forceY += y;
        forceZ += z;
    }

    if(forceX == 0 and forceY == 0 and forceZ == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}