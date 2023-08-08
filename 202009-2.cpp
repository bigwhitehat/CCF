#include <iostream>
using namespace std;

int main()
{
    int n, k, t, xl, yd, xr, yu;
    int flag, num, i, j;
    cin >> n >> k >> t >> xl >> yd >> xr >> yu;
    int u = 0, v = 0;
    int **p = new int*[n];

    for (i = 0; i < n; i++)
    {
        p[i] = new int[2 * t];
        for (j = 0; j < 2 * t; j++)
        {
            cin >> p[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        flag = 0, num = 0;
        for (j = 0; j < 2 * t; j += 2)
        {
            if (p[i][j] >= xl && p[i][j] <= xr && p[i][j + 1] >= yd && p[i][j + 1] <= yu)
            {
                flag++;
                num++;
            }
            else
            {
                num = 0;
            }
            if (num >= k)
                break;
        }
        if (flag != 0)
            u++;
        if (num >= k)
            v++;
    }
    cout << u << endl;
    cout << v << endl;

    for (i = 0; i < n; i++)
    {
        delete[] p[i];
    }
    delete[] p;
    system("pause");
    return 0;
}
