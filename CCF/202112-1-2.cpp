#include <iostream>
using namespace std;
int main()
{
    int n, N;
    int A[210];
    int i;
    int sum = 0;
    int f = 0;
    cin >> n >> N;
    A[0] = 0;
    for(i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    i = 1;
    for(int x = 1; x < N; x++)
    {
        if(x < A[i])
        {
            f = i - 1;
        }
        else if(x == A[i])
        {
            f = i;
            if(i < n)i++;
        }
        else if(x > A[i])
        {
            f = i;
        }
        sum = sum + f;
    }
    cout << sum << endl;
    system("pause");
    return 0;
}