#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, N;
    cin >> n >> N;
    int A[100010];
    long long fx = 0;                   //f[i]
    long long sum = 0;
    A[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    A[n + 1] = N;
    long long r = N / (n + 1);
    long long gx = 0;                   //g[i]
    long long dr = r;
    long long ddr;
    int flag = 0; 

    for(int i = 0; i <= n; i++)
    {
        fx = i;
        for(long long j = A[i]; j <= A[i + 1] - 1; j += dr)
        {
            gx = j / r;     
            long long res = gx > fx ? (gx - fx) : (fx - gx);
            if(flag == 1)
            {
                dr = ddr;
                flag = 0;
            }
            else{
                dr = r;
            }
            //第一段
            if(j + dr - 1 <= A[i + 1] - 1)
            {
                sum += dr * res;
            }
            //求和：差值×长度
            if(j + dr - 1 > A[i + 1] - 1)
            {
                sum += (A[i + 1] - j) * res;
                ddr = dr - (A[i + 1] - j);
                flag = 1;
            } 
            //最后一段
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}