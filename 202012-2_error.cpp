#include <iostream>
using namespace std;
int main()
{
    int n;
    int i, j;
    int *p = new int [n];
    int *q = new int [n];
    int **predict = new int *[n];
    int *sum = new int [n];
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }
    for(i = 0; i < n; i++)
    {
        predict[i] = new int[n];
        for(j = 0; j < n; j++)
        {
            if(p[i] > p[j])
            {
                predict[i][j] = 0;
            }else{
                predict[i][j] = 1;
            }
        } 
    }
    for(i = 0; i < n; i++)
    {
        sum[i] = 0;
        for(j = 0; j < n; j++)
        {
            if(predict[i][j] == q[j])
            {
                sum[i]++;
            }
        }
    }
    int max = 0;
    for(i = 0; i < n; i++)
    {
        if(sum[max] <= sum[i])
        {
            max = i;
        }
    }
    cout << p[max] << endl;

    system("pause");
    return 0;
}