#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int sum;
    int **p = new int *[n];
    for(i = 0; i < n; i++)
    {
        p[i] = new int [2];
        for(j = 0; j < 2; j++)
        {
            cin >> p[i][j];
        }
    }
    sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += p[i][0] * p[i][1];
    }

    int flag = max(0, sum);
    cout << flag << endl;

    system("pause");
    return 0;

}
