#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int A[100010] = {0}, B[100010] = {0};
    int sum = 0;
    int temp;
    A[0] = B[0] = 1;
    for(int i = 1; i <= k; i++)
    {
        cin >> temp >> B[i];
        if(A[B[i]] == 0)
        {
            sum++;
        }
        A[temp] ++;
    }
    cout << sum << endl;
    system("pause");
    return 0;


}