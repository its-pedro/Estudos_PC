#include <bits/stdc++.h>
 
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    //solucao em O(n^2)
    FASTIO
    int size; cin >> size;
    vll array(size), LIS(size,1);

    cin >> array[0];
    int longest = 1;
    for(int i = 1; i < size; i++)
    {
        cin >> array[i];
        for(int j = 0; j < i; j++)
        {
            if(array[i] > array[j])
            {
                LIS[i] = max(LIS[i], LIS[j]+1);

                if(LIS[i] > longest)
                    longest = LIS[i];
                
            }
        }
    }
    cout << longest << endl;
    
    return 0;
}