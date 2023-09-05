#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double sum = 0.0;
    double h = 0.0;
    double t = 0.0;
    double a[1001];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    double a_1 = sum * 1.0 / n * 1.0;

    for(int i = 0; i < n; i++)
    {
        h += (a[i] - a_1) * (a[i] - a_1) * 1.0 / n * 1.0;
    }

    for(int i = 0; i < n; i++)
    {
        t = (a[i] - a_1) * 1.0 / sqrt(h);
        printf("%lf\n", t);
    }
    system("pause");
    return 0;
}