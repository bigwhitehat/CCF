#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    int sum;
    int t[10010], c[10010];
    int q[10010];
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> t[i] >> c[i];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> q[i];
    }
    for(int i = 1; i <= m; i++)
    {
        sum = 0;
        int time = q[i] + k;
        for(int j = 1; j <= n; j++)
        {
            if(t[j] >= time && t[j] - time < c[j])
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;

}