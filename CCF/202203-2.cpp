// 暴力题解 70分
/**#include <iostream>
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
**/
//差分数组，以q为对象，根据公式求出q的范围，使用差分数组取值
#include <iostream>
using namespace std;
const int N = 2e5+10;
int main()
{
    int n, m, k;
    int A[N];
    cin >> n >> m >> k;
    int t, c;
    for(int i = 0; i < n; i++)
    {
        cin >> t >> c;
        int l = (t - c - k+ 1 > 0) ? (t - c - k + 1) : 1;
        int r = t - k > 0 ? t - k : 1;
        A[l] += 1;
        A[r + 1] -= 1;
    }
    for(int i = 1; i < N; i++)
    {
        A[i] += A[i - 1];
    }
    for(int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        cout << A[q] << endl;
    }
    system("pause");
    return 0;
}