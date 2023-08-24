#include <iostream>
using namespace std;
int main()
{
    int n,l,r,t;
    int i,j;
    int sum = 0, count = 0;
    int *s = new int[n*n];
    cin >> n >> l >> r >> t;
    int **p = new int *[n];
    for(i = 1; i <= n; i++)
    {
        p[i] = new int [n];
        for(j = 1; j <= n; j++)
        {
            cin >> p[i][j];
        }
    }
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            p[i][j] += p[i-1][j] + p[i][j-1] - p[i-1][j-1];
        }
    }
    for(i = 1; i <= n; i++)
    {
        int up = (i - r < 1) ? 1 : (i-r);
        int down = ((i + r) > n) ? n : (i + r);

        for(j = 0; j <= n; j++)
        {
            int right = (j + r > n) ? n : (j + r);
            int left = (j - r < 1) ? 1 : (j - r);
            sum = p[down][right] - p[down][left-1] - p[up-1][right] + p[up-1][left-1];
            double cr = down - up + 1;
            double cl = right - left + 1;
            double ave = sum / (cr * cl);
            if(ave <= t) count++; 
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
    
}