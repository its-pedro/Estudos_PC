#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define f first
#define s second
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    //FASTIO
    int linhas, colunas; cin >> linhas >> colunas;
    int posBegin, posEnd;
    vector<vi> grid(linhas+2);
    
    int i, j;
    for(i = 0; i < linhas+2; i++)
    {
        for(j = 0; j < colunas+2; j++)
        {
            if(i == 0 || i == linhas+1 || j == 0 || j == colunas+1)
            {
                grid[i].pb(0);
            }else{
                char caracter; cin >> caracter;
                if(caracter == '#')
                    grid[i].pb(0);
                else 
                    grid[i].pb(1);

                if(caracter == 'A')
                    posBegin = (i-1)*colunas + (j-1);
                if(caracter == 'B')
                posEnd = (i-1)*colunas + (j-1);
            }   
        }
    }

    int pos;
    vector<vector<int>> path(linhas*colunas);
    for(i = 1; i < linhas+1; i++)
    {
        for(j = 1; j < colunas+1; j++)
        {
           if(grid[i][j] == 1)
           {
                pos = (i-1)*colunas + (j-1);
                int close;

                if(grid[i+1][j] == 1)
                {
                    close = (i)*colunas + (j-1);
                    path[pos].pb(close);
                }
                if(grid[i-1][j] == 1)
                { 
                    close = (i-2)*colunas + (j-1);
                    path[pos].pb(close);
                }
                if(grid[i][j+1] == 1)
                { 
                    close = (i-1)*colunas + (j);
                    path[pos].pb(close);
                }
                if(grid[i][j-1] == 1)
                {                    
                    close = (i-1)*colunas + (j-2);
                    path[pos].pb(close);
                }
           }
        }
    }

    queue<int> aux;
    stack<char> saida;
    aux.push(posBegin);
    vector<pair<char,bool>> visited(linhas*colunas, mp(' ',false));
    visited[posBegin] = mp('P', true);
    char code;
    bool found = false;

    while(aux.size())
    {
        int u = aux.front();
        aux.pop();
        for(int v : path[u])
        {
            if(visited[v].s == false)
            {
                aux.push(v);
                if(v == u+1){code = 'R';}
                else if(v == u-1){code = 'L';}
                else if(v == u+colunas){code = 'D';}
                else if(v == u-colunas){code = 'U';}

                visited[v] = mp(code, true);
            }
            if(v == posEnd)
            {
                found = true;
                while(1)
                {
                    if(visited[v].f == 'P'){break;}

                    int inc;
                    saida.push(visited[v].f);
                    if(visited[v].f == 'L'){inc = 1;}
                    else if(visited[v].f == 'R'){inc = -1;}
                    else if(visited[v].f == 'U'){inc =  colunas;}
                    else if(visited[v].f == 'D'){inc = -colunas;}
                    v += inc;
                }
            }
            if(found){break;}
        }
        if(found){break;}
    }

    /*for(i = 0; i <= visited.size(); i++)
    {
        if(visited[i].s)
        {
            cout << i << endl;
            cout << visited[i].f << ' ' << visited[i].s << endl;
        }
    }*/
    if(!found)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl << saida.size() << endl;
        while(saida.size()){
            cout << saida.top();    
            saida.pop();
        }
    }

    /*
    cout << posBegin << endl;
    cout << posEnd << endl;

    for(i = 1; i < linhas+1; i++)
    {
        for(j = 1; j < colunas+1; j++)
        {
            if(grid[i][j] == 1)
            {
                pos = (i-1)*colunas + (j-1);
                cout << "position: (" << i << "," << j << ") = " << pos << endl;
                while(!path[pos].empty()){
                    cout << path[pos].back() << ' ';
                    path[pos].pop_back();
                }
                cout << endl;
            }
        }
    }
    */

    return 0;
}