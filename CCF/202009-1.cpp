#include <iostream>
#include <malloc.h>
using namespace std;
int main()
{
    int n;
    int n_x, n_y, i, i_x, i_y;
    int *p = NULL;
    int *q = NULL;
    cin >> n >> n_x >> n_y;
    p = (int *)malloc(sizeof(int)*n);
    q = (int *)malloc(sizeof(int)*n);

    for(i = 1; i <= n; i++)
    {
        cin >> i_x >> i_y;
        p[i] = (i_x - n_x) * (i_x - n_x) + (i_y - n_y) * (i_y - n_y);
        q[i] = i;
    }
    
    for(i = 1; i <= n; i++)
    {
        int flag = 1;
        int k = 0;
        int t = 0;
        for(int j = 1; j <= n - i; j++)
        {
            if(p[j] > p[j + 1])
            {
                k = p[j];
                p[j] = p[j + 1];
                p[j + 1] = k;
            
                t = q[j];
                q[j] = q[j + 1];
                q[j + 1] = t;
                flag = 0;
            }
        }
        if(flag ==1)
            break;
    }
    for(i = 1; i <= 3; i++)
    {
        cout << q[i] << endl;
    }

    free(p);
    free(q);
    system("pause");
    return 0;
    
}