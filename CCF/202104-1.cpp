#include <iostream>
using namespace std;
int main()
{
    int n, m, h;
    cin >> n >> m >> h;
    int **p = new int *[n];
    int *sum = new int [h];
    int i, j;
    for(i = 0; i < h; i++)
    {
        sum[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        p[i] = new int [m];
        for(j = 0; j < m; j++)
        {
            cin >> p[i][j];
            sum[p[i][j]]++;
        }
    }
    for(i = 0; i < h; i++)
    {
        cout << sum[i] << " ";
    }
    system("pause");
    return 0;
    
}