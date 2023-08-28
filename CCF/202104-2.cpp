#include <iostream>
using namespace std;
int main()
{
    int n, L, r, t;
    cin >> n >> L >> r >> t;
    int sum = 0, count = 0;
    int **p = new int *[n];
    int i, j;
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
        int up = (i - r < 1) ? 1 : (i - r);
        int down = (i + r > n) ? n : (i + r);
        for(j = 1; j <= n; j++)
        {
            int left = (j - r < 1) ? 1 : (j - r);
            int right = (j + r > n) ? n : (j + r);
            sum = p[down][right] - p[up - 1][right] - p[down][left - 1] + p[up - 1][left - 1]; 
            int k = right - left + 1;
            int t = down - up + 1;
            double ave = sum / (k * t);
            if(ave <= t) count++;
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}