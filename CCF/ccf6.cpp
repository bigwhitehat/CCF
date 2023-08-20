#include <iostream>
using namespace std;
int main()
{
    int n,l,r,t;
    int i,j;
    int sum = 0, count = 0;
    cin >> n >> l >> r >> t;
    int **p = new int *[n];
    for(i = 0; i < n; i++)
    {
        p[i] = new int [n];
        for(j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    
}