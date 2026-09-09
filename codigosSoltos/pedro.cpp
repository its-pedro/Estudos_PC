#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define endl '\n'

using namespace std;

int main()
{
    ll i, j, linhas, colunas, queries; cin >> linhas >> colunas >> queries;
    char grid[linhas][colunas];
    int adjacents[linhas+2][colunas+2];

    for(i = 0; i < linhas+2; i++)
        for(j = 0; j < colunas+2; j++)
            adjacents[i][j] = 0;

    for(i = 0; i < linhas; i++)
        for(j = 0; j < colunas; j++)
            cin >> grid[i][j];
    
    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < colunas; j++)
        {
            if(grid[i][j] == '.')
            {
                if(grid[i][j+1] == '.')
                    adjacents[i+1][j+2]++;

                if(grid[i][j-1] == '.')
                    adjacents[i+1][j]++;

                if(grid[i+1][j] == '.')
                    adjacents[i+2][j+1]++;

                if(grid[i-1][j] == '.')
                    adjacents[i][j+1]++;
            }
        }
    }

    bool flag;
    while(queries--)
    {
        flag = false;
        for(i = 1; i <= linhas; i++)
        {
            for(j = 1; j <= colunas; j++)
            {
                if(adjacents[i][j] == 1)
                {
                    flag = true;
                    grid[i-1][j-1] = 'X';
                    adjacents[i][j]--;

                    if(adjacents[i][j+1] > 0)
                        adjacents[i][j+1]--;

                    else if(adjacents[i][j-1] > 0)
                        adjacents[i][j-1]--;

                    else if(adjacents[i+1][j] > 0)
                        adjacents[i+1][j]--;

                    else if(adjacents[i-1][j] > 0)
                        adjacents[i-1][j]--;
                }
                if(flag){break;}
            }
            if(flag){break;}
        }
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            cout << grid[i][j]; 
        }
        cout << endl;
    }
    
    return 0;
}