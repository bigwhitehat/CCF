#include <iostream>
using namespace std;

int main()
{
    const int M = 201;
    int n, N;
    cin >> n >> N;
    int a[M];
    int sum = 0;
    int i, j;
    a[0] = 0;
    for(i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(i = 2; i <= n; i++)
    {
        sum += (a[i] - a[i-1]) * (i - 1);
    }
    sum += (N - a[n]) * n;
    
    cout << sum << endl;
    system("pause");
    return 0;

}